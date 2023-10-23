/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 09:42:57 by mgraefen          #+#    #+#             */
/*   Updated: 2023/10/23 13:21:31 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <sstream>
#include <string>

enum Operator {
  PLUS,
  MINUS,
  MULTI,
  DIVIDE,
};

class RPN {
 public:
  static bool solve(std::string);

 private:
  RPN();
  ~RPN();
  RPN(const RPN &rhs);
  RPN &operator=(const RPN &rhs);
  static bool evaluate_string(std::string);
	static bool isInteger(const std::string& str);
  static bool is_operator(char);
  static int get_operator(char);
  static int calculate(char);
  static std::stack<int> operands;
	static int _result;

	class DivisionByZero : public std::exception{
	public:
	virtual const char* what() const throw();
	};
};


#endif  // RPN_HPP