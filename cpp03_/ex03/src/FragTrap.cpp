/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 09:30:22 by mgraefen          #+#    #+#             */
/*   Updated: 2023/06/21 10:33:41 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) {
  std::cout << "FragTrap created" << std::endl;
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;
  return;
}

FragTrap::FragTrap(std::string name)
    : ClapTrap(name) {
			_hit_points = 100;
			_energy_points = 100;
			_attack_damage = 30;
  std::cout << "FragTrap created with the following stats - NAME: " << _name
            << " HP: " << get_hp() << " EP: " << get_ep() << " AP: " << get_ap()
            << std::endl;
  return;
}

FragTrap &FragTrap::operator=(const FragTrap &rhs) {
  _name = rhs._name;
  _hit_points = rhs._hit_points;
  _energy_points = rhs._energy_points;
  _attack_damage = rhs._attack_damage;
  return (*this);
}

FragTrap::FragTrap(const FragTrap &rhs) : ClapTrap(rhs) { return; }

FragTrap::~FragTrap(void) {
  std::cout << "FragTrap " << get_name() << " destructed" << std::endl;
  return;
}

void FragTrap::highFivesGuys(void) {
  std::cout << get_name() << " requests a high-five!!! PLEASEEEEE!!!"
            << std::endl;
}