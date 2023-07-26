/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 14:53:07 by mgraefen          #+#    #+#             */
/*   Updated: 2023/07/10 16:50:06 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void) {
  FragTrap frag_Bernhard("Frag Bernhard");

  frag_Bernhard.attack("test dummy");
  frag_Bernhard.takeDamage(5);
  frag_Bernhard.beRepaired(INT_MAX);
  frag_Bernhard.takeDamage(10);
	frag_Bernhard.highFivesGuys();
  frag_Bernhard.takeDamage(INT_MAX);
  frag_Bernhard.beRepaired(INT_MAX);
  frag_Bernhard.beRepaired(5);
  frag_Bernhard.attack("test dummy");

  return 0;
}