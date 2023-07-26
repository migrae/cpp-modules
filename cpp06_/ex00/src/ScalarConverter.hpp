/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 14:16:18 by mgraefen          #+#    #+#             */
/*   Updated: 2023/07/11 14:02:13 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>
#include <sstream>
#include <iostream>
#include <limits>

class ScalarConverter {
	public:
	static void convert(std::string);
	
	//Exceptions
	class InvalidInput : public std::exception{
	public:
	virtual const char* what() const throw();
	};

	private:
	static int identify(std::string);
	static bool is_number(std::string);
	static int count_occurrences(std::string, char);
	static bool is_p_literal(std::string);
	static bool is_int(std::string);
	static bool is_float(std::string);
	static bool is_double(std::string);
	static void convert_char(std::string);
	static void convert_int(std::string);
	static void convert_double(std::string);
	static void convert_float(std::string);
	
	ScalarConverter();
	~ScalarConverter();
	ScalarConverter(const ScalarConverter &rhs);
	ScalarConverter &operator=(const ScalarConverter &rhs);
};

typedef enum e_type
{
	CHAR,
	INT,
	DOUBLE,
	FLOAT,
}	t_type;

#endif