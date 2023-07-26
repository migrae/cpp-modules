/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 14:53:07 by mgraefen          #+#    #+#             */
/*   Updated: 2023/07/26 15:05:43 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
	ScavTrap Flo;
	Flo.attack("splittastatur");
  ClapTrap *Bernhard = new ScavTrap();
	Bernhard->attack("toast");
	delete Bernhard;
  ScavTrap evil_Bernhard("Evil Bernhard");
	
  evil_Bernhard.attack("test dummy");
  evil_Bernhard.takeDamage(5);
  evil_Bernhard.beRepaired(INT_MAX);
  evil_Bernhard.takeDamage(10);
	evil_Bernhard.gatekeeper_mode();
  evil_Bernhard.takeDamage(INT_MAX);
  evil_Bernhard.beRepaired(INT_MAX);
  evil_Bernhard.beRepaired(5);
  evil_Bernhard.attack("test dummy");
  return 0;
}