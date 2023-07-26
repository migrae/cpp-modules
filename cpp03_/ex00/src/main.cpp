/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 14:53:07 by mgraefen          #+#    #+#             */
/*   Updated: 2023/07/03 13:04:21 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void) {
  ClapTrap Bernhard("Bernhard");

  Bernhard.attack("test dummy");
  Bernhard.takeDamage(5);
  Bernhard.beRepaired(5);
  Bernhard.takeDamage(10);
  Bernhard.beRepaired(5);
  Bernhard.attack("test dummy");
	Bernhard.takeDamage(INT_MAX);
	Bernhard.beRepaired(INT_MAX);
  return 0;
}