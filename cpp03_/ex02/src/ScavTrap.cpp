/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 09:30:22 by mgraefen          #+#    #+#             */
/*   Updated: 2023/07/07 11:45:54 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {
  std::cout << "ScavTrap created" << std::endl;
	_hit_points = 100;
  _energy_points = 100;
  _attack_damage = 30;
  return;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
  _hit_points = 100;
  _energy_points = 100;
  _attack_damage = 30;
  std::cout << "ScavTrap created with the following stats - NAME: " << _name
            << " HP: " << get_hp() << " EP: " << get_ep() << " AP: " << get_ap()
            << std::endl;
  return;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &rhs) {
  _name = rhs._name;
  _hit_points = rhs._hit_points;
  _energy_points = rhs._energy_points;
  _attack_damage = rhs._attack_damage;
  return (*this);
}

ScavTrap::ScavTrap(const ScavTrap &rhs) : ClapTrap(rhs) { return; }

ScavTrap::~ScavTrap(void) {
  std::cout << "ScavTrap " << get_name() << " destructed" << std::endl;
  return;
}

void ScavTrap::gatekeeper_mode(void) {
  std::cout << get_name() << " is in gatekeeper mode ... whatever this means"
            << std::endl;
}

void ScavTrap::attack(const std::string &target) {
  std::cout << this->_name;
  if (get_hp() == 0) {
    std::cout << " can't attack, because it is dead. Sorry for your loss :("
              << std::endl;
    return;
  }
  if (get_ep() == 0) {
    std::cout << " can't attack, because it has no energy left. Go get some "
                 "sleep, or whatever ClapTrap thingys do"
              << std::endl;
    return;
  }
  std::cout << " attacks in ScavTrap fashion " << target << " ,causing " << get_ap()
            << " points of damage !" << std::endl;
  _energy_points--;
}