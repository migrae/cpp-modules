/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 14:19:12 by mgraefen          #+#    #+#             */
/*   Updated: 2023/07/11 14:09:18 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void ScalarConverter::convert(std::string str) {
  if (str.size() == 0) throw InvalidInput();
  int type = identify(str);
  switch (type) {
    case CHAR:
      convert_char(str);
      break;
    case INT:
      convert_int(str);
      break;
    case DOUBLE:
      convert_double(str);
      break;
    case FLOAT:
      convert_float(str);
      break;
    default:
      throw InvalidInput();
  }
}

// Identify

int ScalarConverter::identify(std::string str) {
  if (str.size() == 1)
    return CHAR;
  else if (is_int(str) == true)
    return INT;
  else if (is_double(str) == true)
    return DOUBLE;
  else if (is_float(str) == true)
    return FLOAT;
  else
    return (-1);
}

bool ScalarConverter::is_int(std::string str) {
  long double int_val;
  if (is_p_literal(str) || !is_number(str) ||
      str.find_first_of(".f") != std::string::npos)
    return false;
  std::istringstream iss(str);
  iss >> int_val;
  if (int_val >= std::numeric_limits<int>::min() &&
      int_val <= std::numeric_limits<int>::max())
    return true;
  return false;
}

bool ScalarConverter::is_double(std::string str) {
  double d_value;
  if ((!is_number(str) && !is_p_literal(str)) ||
      count_occurrences(str, '.') != 1)
    return false;
  std::istringstream iss(str);
  iss >> d_value;
  if (iss.fail() || !iss.eof()) return false;
  return true;
}

bool ScalarConverter::is_float(std::string str) {
  float f_value;
  if ((!is_number(str) && !is_p_literal(str)) ||
      count_occurrences(str, '.') != 1 || count_occurrences(str, 'f') != 1)
    return false;
  if (is_p_literal(str) && count_occurrences(str, 'f') == 2) return true;
  str.erase(str.size() - 1, 1);
  if (str.find('.') == str.size() - 1) return false;
  std::istringstream iss(str);
  iss >> f_value;
  if (!iss.fail()) return true;
  return true;
}

bool ScalarConverter::is_p_literal(std::string str) {
  return (str.compare("+inf") == 0 || str.compare("-inf") == 0 ||
          str.compare("+inff") == 0 || str.compare("-inff") == 0 ||
          str.compare("nan") == 0 || str.compare("nanf") == 0);
}

bool ScalarConverter::is_number(std::string str) {
  if (str.find_first_not_of("-+0123456789.f") != std::string::npos)
    return false;
  return true;
}

int ScalarConverter::count_occurrences(std::string str, char c) {
  if (is_p_literal(str)) return 1;
  int count = 0;
  for (size_t i = 0; i < str.size(); ++i) {
    if (str.at(i) == c) count++;
  }
  return (count);
}

// Converter

void ScalarConverter::convert_char(std::string str) {
  char c = str.at(0);
  int i_value = static_cast<int>(c);
  double d_value = static_cast<double>(c);
  float f_value = static_cast<float>(c);

  std::cout << "Char detected - Conversions: " << std::endl;
  if (c > 31 && c < 127)
    std::cout << "Char: " << c << std::endl;
  else
    std::cout << "Char: not displayable." << std::endl;
  std::cout << "Int: " << i_value << std::endl;
  std::cout.precision(1);
  std::cout << std::showpoint << std::fixed << "Float: " << f_value << "f"
            << std::endl;
  std::cout << "Double: " << d_value << std::endl;
}

void ScalarConverter::convert_int(std::string str) {
  char c;
  int i_value;
  std::istringstream iss(str);
  iss >> i_value;
  double d_value = static_cast<double>(i_value);
  float f_value = static_cast<float>(i_value);

  std::cout << "Int detected - Conversions: " << std::endl;
  std::cout << "Char: ";
  if (i_value > 31 && i_value < 127) {
    c = static_cast<char>(i_value);
    std::cout << c << std::endl;
  } else
    std::cout << "not displayable." << std::endl;
  std::cout << "Int: " << i_value << std::endl;
  std::cout.precision(1);
  std::cout << std::showpoint << std::fixed << "Float: " << f_value << "f"
            << std::endl;
  std::cout << "Double: " << d_value << std::endl;
}

void ScalarConverter::convert_double(std::string str) {
  char c;
  double d_value;
  std::istringstream iss(str);
  iss >> d_value;
  int i_value = static_cast<int>(d_value);
  float f_value = static_cast<float>(d_value);

  std::cout << "Double detected - Conversions: " << std::endl;
  // Char
  std::cout << "Char: ";
  if (i_value > 31 && i_value < 127) {
    c = static_cast<char>(d_value);
    std::cout << c << std::endl;
  } else if (!is_p_literal(str))
    std::cout << "not displayable." << std::endl;
  else
    std::cout << "impossible." << std::endl;
  // Int
  std::cout << "Int: ";
  if (!is_p_literal(str) && d_value >= std::numeric_limits<int>::min() &&
      d_value <= std::numeric_limits<int>::max())
    std::cout << i_value << std::endl;
  else {
    std::cout << "impossible." << std::endl;
  }
  // Float
  std::cout.precision(1);
  std::cout << std::showpoint << std::fixed << "Float: " << f_value << "f"
            << std::endl;
  // Double
  std::cout << "Double: " << d_value << std::endl;
}

void ScalarConverter::convert_float(std::string str) {
  char c;
  float f_value;

  std::cout << "Float detected - Conversions: " << std::endl;
  str.erase(str.size() - 1, 1);
  std::istringstream iss(str);
  iss >> f_value;
  double d_value = static_cast<double>(f_value);
  int i_value = static_cast<int>(f_value);

  // char
  std::cout << "Char: ";
  if (f_value > 31 && f_value < 127) {
    c = static_cast<char>(f_value);
    std::cout << c << std::endl;
  } else if (!is_p_literal(str))
    std::cout << "not displayable." << std::endl;
  else
    std::cout << "impossible." << std::endl;
  // int
  std::cout << "Int: ";
  if (!is_p_literal(str) &&
      f_value >= static_cast<float>(std::numeric_limits<int>::min()) &&
      f_value <= static_cast<float>(std::numeric_limits<int>::max())) {
    std::cout << i_value << std::endl;
  } else
    std::cout << "impossible." << std::endl;
  // Float
  std::cout.precision(1);
  std::cout << std::showpoint << std::fixed << "Float: " << f_value << "f"
            << std::endl;
  // Double
  std::cout << "Double: " << d_value << std::endl;
}

// Exception
const char *ScalarConverter::InvalidInput::what() const throw() {
  return ("Invalid Input");
}

// Con- & Destructor + Overload
ScalarConverter::ScalarConverter() { return; }
ScalarConverter::~ScalarConverter() { return; }
ScalarConverter::ScalarConverter(const ScalarConverter &rhs) {
  (void)rhs;
  return;
}
ScalarConverter &ScalarConverter::operator=(const ScalarConverter &rhs) {
  (void)rhs;
  return (*this);
}
