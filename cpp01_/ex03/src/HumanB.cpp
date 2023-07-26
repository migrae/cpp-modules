/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 11:10:13 by mgraefen          #+#    #+#             */
/*   Updated: 2023/06/13 15:30:45 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"

HumanB::HumanB(void)
{
	return ;
}

HumanB::HumanB(std::string name) : name(name), weapon(NULL)
{
	return ;
}


HumanB::~HumanB(void)
{
	return ;
}

void HumanB::setWeapon(Weapon &weapon){
	this->weapon = &weapon;

	return;
}

void HumanB::attack(void) const
{
	std::cout << this->name << " attacks with their " << weapon->getType() << std::endl;
}