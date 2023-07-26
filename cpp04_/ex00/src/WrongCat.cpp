/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 15:16:22 by mgraefen          #+#    #+#             */
/*   Updated: 2023/06/21 15:17:26 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) {
	_type = "WrongCat";
	return ;	
}

WrongCat::WrongCat(const WrongCat &rhs) : WrongAnimal(rhs)
{
	*this = rhs;
}

WrongCat &WrongCat::operator=(const WrongCat &rhs)
{
	this->_type = rhs._type;
	return (*this);
}

WrongCat::~WrongCat(void){
	return ;
}

void WrongCat::makeSound() const
{
	std::cout << getType() << " sound" << std::endl;
}