/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 15:17:54 by mgraefen          #+#    #+#             */
/*   Updated: 2023/06/21 15:18:02 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("not set"){
	
	return ;	
}

WrongAnimal::WrongAnimal(const WrongAnimal &rhs)
{
	*this = rhs;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

WrongAnimal::~WrongAnimal(void){
	return ;
}

void WrongAnimal::setType(std::string type)
{
	this->_type = type;
}

std::string WrongAnimal::getType(void) const
{
	return(_type);
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "generic WrongAnimal sound" << std::endl;
	return ;
}