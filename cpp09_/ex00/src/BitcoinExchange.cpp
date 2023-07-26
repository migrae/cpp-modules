/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 13:52:42 by mgraefen          #+#    #+#             */
/*   Updated: 2023/07/18 08:59:48 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

std::map<std::string, float> BitcoinExchange::data;

void BitcoinExchange::init(std::string filename) {
  load_data();
  read_input(filename);
}

void BitcoinExchange::load_data() {
  std::ifstream file("data.csv");
  std::string line;
  if (file.is_open()) {
    while (std::getline(file, line)) {
      std::istringstream iss(line);
      std::string date;
      float value;

      if (!std::getline(iss, date, ',') || !(iss >> value)) {
        continue;
      }
      data.insert(std::make_pair(date, value));
    }
    file.close();
  } else
    std::cout << "Can't open data.csv" << std::endl;
}

bool BitcoinExchange::is_date(std::string date) {
  struct tm tm;
  if (strptime(date.c_str(), "%Y-%m-%d", &tm)) return true;
  return false;
}

float BitcoinExchange::check_value(std::string value) {
/* 	if (value.find_first_not_of("-+0123456789.") != std::string::npos){
		std::cout << "Error: Not a number." << std::endl;
		return -1;
	} */
  std::stringstream ss(value);
  float f_value;
  ss >> f_value;
  if (!ss.eof() || ss.fail()) {
    std::cout << "Error: Not a number." << std::endl;
    return -1;
  } else if (f_value < 0.0) {
    std::cout << "Error: Not a positive number." << std::endl;
    return -1;
  } else if (f_value > 1000.0) {
    std::cout << "Error: too large a number." << std::endl;
    return -1;
  } else
    return f_value;
}

void BitcoinExchange::read_input(std::string input_file) {
  std::ifstream file(input_file);
  std::string line;
  bool header = true;
  if (file.is_open()) {
    while (std::getline(file, line)) {
      parse_line(line, header);
      header = false;
    }
    file.close();
  } else
    std::cout << "Can't open " << input_file << std::endl;
}

std::string BitcoinExchange::remove_space(std::string str) {
  str.erase(std::remove(str.begin(), str.end(), ' '), str.end());
  return str;
}

void BitcoinExchange::parse_line(std::string line, bool header) {
  std::string date;
  std::string amount;
  float f_value;

  size_t pipe_pos = line.find('|');
  if (pipe_pos == std::string::npos) {
    std::cout << "Error: bad input => " << line << std::endl;
    return;
  }
  line = remove_space(line);
  date = line.substr(0, pipe_pos - 1);
  amount = line.substr(pipe_pos, std::string::npos);
  if (header) {
    if (date != "date" || amount != "value") {
      std::cout << "Error: Wrong header format." << std::endl;
    }
    return;
  }
  if (!is_date(date)) {
    std::cout << "Error: No valid date" << std::endl;
    return;
  }
  f_value = check_value(amount);
  if (f_value < 0) return;
  find_data(date, f_value);
}

void BitcoinExchange::find_data(std::string date, float amount) {
  std::map<std::string, float>::iterator it = data.find(date);
  if (it == data.end()) {
    it = data.upper_bound(date);
    if (it == data.begin()) {
      std::cout << "Error: Could not find date in database" << std::endl;
      return;
    } else
      --it;
  }
  std::cout << date << " => " << amount << " = " << it->second * amount
            << std::endl;
}

BitcoinExchange::BitcoinExchange() {}
BitcoinExchange::~BitcoinExchange() {}
BitcoinExchange::BitcoinExchange(const BitcoinExchange &rhs) { (void)rhs; }
BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &rhs) {
  (void)rhs;
  return *this;
}