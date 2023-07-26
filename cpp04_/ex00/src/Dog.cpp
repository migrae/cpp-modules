/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 14:50:06 by mgraefen          #+#    #+#             */
/*   Updated: 2023/07/19 10:58:03 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) {
	_type = "Dog";
	return ;	
}

Dog::Dog(const Dog &rhs) : Animal (rhs)
{
	*this = rhs;
}

Dog &Dog::operator=(const Dog &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

Dog::~Dog(void){
	return ;
}

void Dog::makeSound() const
{
	std::cout << getType() << " sound" << std::endl;
}