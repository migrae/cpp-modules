/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 10:30:27 by mgraefen          #+#    #+#             */
/*   Updated: 2023/06/13 10:48:35 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iomanip>
#include <iostream>

int main(void) {
  std::string str = "HI THIS IS BRAIN";
  std::string *stringPTR = &str;
  std::string &stringREF = str;

  std::cout << std::setw(25) << std::left << "Address of str: " << &str
            << std::endl;
  std::cout << std::setw(25) << std::left
            << "Address of stringPTR: " << stringPTR << std::endl;
  std::cout << std::setw(25) << std::left << "Address of strREF: " << &stringREF
            << std::endl;
  std::cout << std::setw(25) << std::left << "Value of str: " << str
            << std::endl;
  std::cout << std::setw(25) << std::left
            << "Value of stringPTR: " << *stringPTR << std::endl;
  std::cout << std::setw(25) << std::left << "Value of str: " << stringREF
            << std::endl;

  return (0);
}