/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 10:23:57 by mgraefen          #+#    #+#             */
/*   Updated: 2023/06/14 11:00:26 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv) {
  if (argc != 2) {
    std::cout << "[ Probably complaining about insignificant problems ]"
              << std::endl;
    return (1);
  }
  Harl harl_filter;

  harl_filter.complain(argv[1]);
  return (0);
}