/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Mute_AAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 12:48:13 by mgraefen          #+#    #+#             */
/*   Updated: 2023/06/22 09:48:24 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void) : _type("not set"){
	std::cout << "AAnimal constructed" << std::endl;
	return ;	
}

AAnimal::AAnimal(const AAnimal &rhs)
{
	*this = rhs;
}

AAnimal &AAnimal::operator=(const AAnimal &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

AAnimal::~AAnimal(void){
	std::cout << "AAnimal destructed" << std::endl;
	return ;
}

void AAnimal::setType(std::string type)
{
	this->_type = type;
}

std::string AAnimal::getType(void) const
{
	return(_type);
}

/* void AAnimal::makeSound(void) const
{
	std::cout << "generic AAnimal sound" << std::endl;
	return ;
} */