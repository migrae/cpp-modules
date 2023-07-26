/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 08:35:58 by mgraefen          #+#    #+#             */
/*   Updated: 2023/07/26 14:47:59 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv) {
  if (argc > 1) {
    if (!PmergeMe::sort(argc, argv)) return 1;
  } else {
    std::cout << "Error. Missing arguments!" << std::endl;
    return 1;
  }
  return 0;
}