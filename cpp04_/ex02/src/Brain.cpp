/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 08:39:00 by mgraefen          #+#    #+#             */
/*   Updated: 2023/07/19 11:20:01 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) { 
	std::cout << "Brain default constructed" << std::endl;
	return; }

Brain::Brain(const Brain &rhs) {
  *this = rhs;
  return;
}

Brain &Brain::operator=(const Brain &rhs) {
  for (int i = 0; i < 100; ++i){
	if(!rhs._ideas[i].empty())
		this->_ideas[i] = rhs._ideas[i];
	else
		this->_ideas[i].clear();
	}
  return (*this);
}

Brain::~Brain(void) {
	std::cout << "Brain destructed" << std::endl;
	 return; }

void Brain::setIdea(int it, std::string idea){
	if(it > 100){
		std::cout << "Brain over capacity" << std::endl;
		return ;
	}
	_ideas[it] = idea;
	std::cout << "Added the thought " << idea << " to the brain" << std::endl;
}

void Brain::printIdea(int it){
	if(it > 100){
		std::cout << "Brain slot does not exist" << std::endl;
		return ;
	}
	if(!_ideas[it].empty())
		std::cout << _ideas[it] << std::endl;
	else
		std::cout << "Brain slot empty" << std::endl;
}