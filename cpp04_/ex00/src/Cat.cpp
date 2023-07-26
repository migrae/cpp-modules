/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 12:57:40 by mgraefen          #+#    #+#             */
/*   Updated: 2023/07/19 10:57:47 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {
	_type = "Cat";
	return ;	
}

Cat::Cat (const Cat &rhs) : Animal(rhs)
{
	*this = rhs;
}

Cat &Cat::operator=(const Cat &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

Cat::~Cat(void){
	return ;
}

void Cat::makeSound() const
{
	std::cout << getType() << " sound" << std::endl;
}
