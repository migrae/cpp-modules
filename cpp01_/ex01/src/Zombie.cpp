/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 11:08:35 by mgraefen          #+#    #+#             */
/*   Updated: 2023/06/13 10:44:26 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) { return; }

Zombie::~Zombie(void) {
  std::cout << this->_name << " dies" << std::endl;
  return;
}

Zombie::Zombie(std::string name) : _name(name) { return; }

void Zombie::set_name(std::string name) { this->_name = name; }

void Zombie::announce(void) {
  std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}