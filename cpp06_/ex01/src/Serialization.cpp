/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 08:49:42 by mgraefen          #+#    #+#             */
/*   Updated: 2023/07/11 10:07:55 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

uintptr_t Serializer::serialize(Data *ptr){
	return(reinterpret_cast<uintptr_t>(ptr));
}

Data *Serializer::deserialize(uintptr_t raw){
	return(reinterpret_cast<Data *>(raw));
}

Serializer::Serializer() { return; }

Serializer::~Serializer() { return; }

Serializer::Serializer(const Serializer &rhs) {
  *this = rhs;
  return;
}

Serializer &Serializer::operator=(const Serializer &rhs) {
  if(this != &rhs)
		*this = rhs;
  return *this;
}