/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/07 14:15:46 by mgraefen          #+#    #+#             */
/*   Updated: 2023/07/10 16:08:22 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv) {
  try {
    if (argc == 2) {
      std::string arg = argv[1];
      ScalarConverter::convert(arg);
    } else
      throw ScalarConverter::InvalidInput();
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  return (0);
}