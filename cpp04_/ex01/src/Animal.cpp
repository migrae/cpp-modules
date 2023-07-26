/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 12:48:13 by mgraefen          #+#    #+#             */
/*   Updated: 2023/06/22 09:41:50 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("not set"){
	std::cout << "Animal constructed" << std::endl;
	return ;	
}

Animal::Animal(const Animal &rhs)
{
	*this = rhs;
}

Animal &Animal::operator=(const Animal &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

Animal::~Animal(void){
	std::cout << "Animal destructed" << std::endl;
	return ;
}

void Animal::setType(std::string type)
{
	this->_type = type;
}

std::string Animal::getType(void) const
{
	return(_type);
}

void Animal::makeSound(void) const
{
	std::cout << "generic animal sound" << std::endl;
	return ;
}