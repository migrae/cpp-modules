/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 13:49:09 by mgraefen          #+#    #+#             */
/*   Updated: 2023/06/26 11:07:09 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
	std::cout << "[CONSTRUCTOR] Cure constructed" << std::endl;
  return;
}

Cure::Cure(const Cure &rhs) : AMateria("cure") {
	*this = rhs;
}

Cure &Cure::operator=(const Cure &rhs){
	if(this != &rhs)
		this->_type = rhs._type;
	return(*this);
}

Cure::~Cure() { 
	std::cout << "[DESTRUCTOR] Cure destructed" << std::endl;
	return; }

Cure* Cure::clone() const{
	std::cout << "[CLONE] Cure cloned" << std::endl;
	return(new Cure());
}

void Cure::use(ICharacter& target){
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}