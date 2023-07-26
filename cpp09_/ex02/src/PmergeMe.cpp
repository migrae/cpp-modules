/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 08:40:28 by mgraefen          #+#    #+#             */
/*   Updated: 2023/07/26 14:48:08 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

bool PmergeMe::sort(int argc, char **argv) {
  if (!check_input(argv)) return false;
  Deque_container::sort(argc, argv);
  Vector_container::sort(argc, argv);
  Vector_container::print_final_numbers();
  Deque_container::print_elapsed_time();
  Vector_container::print_elapsed_time();
  return true;
}

bool PmergeMe::check_input(char **argv) {
  for (size_t i = 1; argv[i] != NULL; i++) {
    if (!is_num(argv[i]) || argv[i][0] == 0) {
      std::cout << "Error" << std::endl;
      return false;
    }
  }
  return true;
}

bool PmergeMe::is_num(std::string str) {
  if (str.find_first_not_of("0123456789") != std::string::npos) {
    return false;
  }
  return true;
}

///////////////////////////////////////////////////////
PmergeMe::PmergeMe() { return; }

PmergeMe::~PmergeMe() { return; }

PmergeMe::PmergeMe(const PmergeMe &rhs) {
  (void)rhs;
  return;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &rhs) {
  (void)rhs;
  return *this;
  //////////////////////////////////////////////////////
}