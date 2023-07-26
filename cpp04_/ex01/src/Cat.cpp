/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 12:57:40 by mgraefen          #+#    #+#             */
/*   Updated: 2023/07/18 14:22:19 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {
  _type = "Cat";
  _my_Brain = new Brain();
  std::cout << "Cat constructed" << std::endl;
  return;
}

Cat::Cat(const Cat &rhs) : Animal(rhs){
  this->_type = rhs._type;
  _my_Brain = new Brain(*(rhs._my_Brain));
}

Cat &Cat::operator=(const Cat &rhs) {
  if (this != &rhs) {
    delete _my_Brain;
    this->_type = rhs._type;
    _my_Brain = new Brain(*(rhs._my_Brain));
  }
  return (*this);
}

Cat::~Cat(void) {
  std::cout << "Cat destructed" << std::endl;
  delete _my_Brain;
  return;
}

void Cat::setIdea(int it, std::string idea){
	_my_Brain->setIdea(it, idea);
}

void Cat::printIdea(int it){
	_my_Brain->printIdea(it);
}

void Cat::makeSound() const { std::cout << getType() << " sound" << std::endl; }
