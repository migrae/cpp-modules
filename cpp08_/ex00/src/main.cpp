/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 13:43:11 by mgraefen          #+#    #+#             */
/*   Updated: 2023/10/23 09:08:44 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>

#include "easyfind.hpp"

int main(void) {
  std::vector<int> a;

  a.push_back(3);
  a.push_back(2);
  a.push_back(1);
  a.push_back(9);
  a.push_back(7);

  std::cout << easyfind(a, 9) << std::endl;
  try {
    std::cout << easyfind(a, 11) << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }

  std::vector<int> b;

  try {
    std::cout << easyfind(b, 9) << std::endl;
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
}