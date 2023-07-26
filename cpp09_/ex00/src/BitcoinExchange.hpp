/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 13:44:10 by mgraefen          #+#    #+#             */
/*   Updated: 2023/07/17 16:58:52 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP
#include <map>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

class BitcoinExchange {
	public:
	static void init(std::string);
	
	private:
	BitcoinExchange();
	~BitcoinExchange();
	BitcoinExchange(const BitcoinExchange &rhs);
	BitcoinExchange &operator=(const BitcoinExchange &rhs);
	static std::map<std::string, float> data;
	static void load_data();
	static bool is_date(std::string);
	static float check_value(std::string);
	static void read_input(std::string);
	static void parse_line(std::string, bool);
	static std::string remove_space(std::string);
	static void find_data(std::string, float);
};

#endif //BITCOINEXCHANGE_HPP