/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 11:10:16 by mgraefen          #+#    #+#             */
/*   Updated: 2023/06/26 11:08:34 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
	std::cout << "[CONSTRUCTOR] Ice constructed" << std::endl;
  return;
}

Ice::Ice(const Ice &rhs) : AMateria("ice") {
	*this = rhs;
}

Ice &Ice::operator=(const Ice &rhs){
	if(this != &rhs)
		this->_type = rhs._type;
	return(*this);
}

Ice::~Ice() { 
	std::cout << "[DESTRUCTOR] Ice destructed" << std::endl;
	return; }

Ice* Ice::clone() const{
	std::cout << "[CLONE] Ice cloned" << std::endl;
	return(new Ice());
}

void Ice::use(ICharacter& target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}