/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 14:50:06 by mgraefen          #+#    #+#             */
/*   Updated: 2023/07/18 14:46:20 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) {
  _type = "Dog";
  _my_Brain = new Brain();
  std::cout << "Dog constructed" << std::endl;
  return;
}

Dog::Dog(const Dog &rhs) : AAnimal(rhs){
  this->_type = rhs._type;
  _my_Brain = new Brain(*(rhs._my_Brain));
}

Dog &Dog::operator=(const Dog &rhs) {
  if (this != &rhs) {
    delete _my_Brain;
    this->_type = rhs._type;
    _my_Brain = new Brain(*(rhs._my_Brain));
  }
  return (*this);
}

Dog::~Dog(void) {
  std::cout << "Dog destructed" << std::endl;
  delete _my_Brain;
  return;
}

void Dog::makeSound() const { std::cout << getType() << " sound" << std::endl; }