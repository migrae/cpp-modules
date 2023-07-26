/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 10:52:20 by mgraefen          #+#    #+#             */
/*   Updated: 2023/06/26 10:51:17 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() { return; }

AMateria::AMateria(std::string const& type) : _type(type) { return; }

std::string const& AMateria::getType() const { return (this->_type); }

AMateria::~AMateria() { return; }

void AMateria::use(ICharacter& target){
	(void) target;
	return ;
}

