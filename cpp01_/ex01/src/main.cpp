/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 14:10:14 by mgraefen          #+#    #+#             */
/*   Updated: 2023/06/13 10:44:24 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
  Zombie *testHorde = NULL;

  testHorde = zombieHorde(5, "Brutus");
  for (int i = 0; i < 5; ++i) testHorde[i].announce();
  delete[] testHorde;
  return (0);
}