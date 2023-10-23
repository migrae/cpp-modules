/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 09:43:59 by mgraefen          #+#    #+#             */
/*   Updated: 2023/10/23 13:22:21 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

bool RPN::isInteger(const std::string& str) {
    std::istringstream iss(str);
    int num;
    iss >> num;
    return iss.eof() && !iss.fail();
}

bool RPN::solve(std::string str) {
	if(isInteger(str)){
		std::cout << str << std::endl;
		return true;
	}
  if (str.find_first_not_of("-+*/0123456789 ") != std::string::npos ||
      str.find_first_of("-+*/") == std::string::npos) {
    return false;
  }
  if (!evaluate_string(str)){
		return false;
	} 
  return true;
}

bool RPN::is_operator(char ch) {
  return (ch == '+' || ch == '-' || ch == '*' || ch == '/');
}

bool RPN::evaluate_string(std::string str) {
  for (size_t i = 0; i < str.size(); i++) {
    if (isdigit(str.at(i))) {
      operands.push(str.at(i) - '0');
      if (str.at(i + 1) && str.at(i + 1) != ' ') return false;
    } else if (is_operator(str.at(i))) {
      if (operands.size() < 2) {
        std::cout << "Insufficient operands for calculation" << std::endl;
        return false;
      }
			if(calculate(str.at(i)))
      	return false;
    }
  }
  if (operands.size() == 1)
    std::cout << _result << std::endl;
  else
    return false;
  return true;
}

int RPN::calculate(char op) {
  int operand_2 = operands.top();
  operands.pop();
  int operand_1 = operands.top();
  operands.pop();
  int op_type = get_operator(op);
  int res = 0;
  switch (op_type) {
    case PLUS:
      res = operand_1 + operand_2;
      break;
    case MINUS:
      res = operand_1 - operand_2;
      break;
    case MULTI:
      res = operand_1 * operand_2;
      break;
    case DIVIDE:
      if (operand_2 == 0) {
        throw DivisionByZero();
      }
      break;
    default:
      std::cout << "unknown operator" << std::endl;
      return 1;
  }
  operands.push(res);
  _result = res;
	return 0;
}

int RPN::get_operator(char op) {
  if (op == '+') return PLUS;
  if (op == '-') return MINUS;
  if (op == '*') return MULTI;
  if (op == '/')
    return DIVIDE;
  else
    return -1;
}

const char *RPN::DivisionByZero::what() const throw() {
  return ("Error: Division by zero");
}

std::stack<int> RPN::operands;
int RPN::_result;

RPN::RPN() { return; }

RPN::~RPN() { return; }

RPN::RPN(const RPN &rhs) { *this = rhs; }
RPN &RPN::operator=(const RPN &rhs) {
  operands = rhs.operands;
  _result = rhs._result;
  return *this;
}