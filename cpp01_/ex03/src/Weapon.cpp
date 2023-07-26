/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 11:14:23 by mgraefen          #+#    #+#             */
/*   Updated: 2023/06/13 12:25:58 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
	return ;
}

Weapon::Weapon(std::string type)
{
	setType(type);
	return ;
}

Weapon::~Weapon(void)
{
	return ;
}

std::string const & Weapon::getType(void) const
{	
	return(type);
}

void Weapon::setType(std::string type)
{
	this->type = type;
}