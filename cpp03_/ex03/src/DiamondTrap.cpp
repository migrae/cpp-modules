/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 15:19:15 by mgraefen          #+#    #+#             */
/*   Updated: 2023/07/11 08:18:09 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) {
  std::cout << "DiamondTrap created" << std::endl;
  return;
}

DiamondTrap::DiamondTrap(const std::string name) {
	ClapTrap::_name  = name + "_clap_name";
	this->_name = name;
	this->_hit_points = FragTrap::_hit_points;
	this->_energy_points = ScavTrap::_energy_points;
	FragTrap SpareParts;
	this->_attack_damage = SpareParts.get_ap();
  std::cout << "DiamondTrap created with the following stats - NAME: " << this->_name
            << " HP: " << this->_hit_points << " EP: " << this->_energy_points << " AP: " << this->_attack_damage
            << std::endl;
  return;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &rhs) {
  _name = rhs._name;
  _hit_points = rhs._hit_points;
  _energy_points = rhs._energy_points;
  _attack_damage = rhs._attack_damage;
  return (*this);
}

DiamondTrap::DiamondTrap(const DiamondTrap &rhs) {
	*this = rhs;
	 return; }

DiamondTrap::~DiamondTrap(void) {
  std::cout << "DiamondTrap " << this->_name << " destructed" << std::endl;
  return;
}

std::string DiamondTrap::get_dt_name(void){
	return(_name);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "Hello, my ClapTrap name is " << ClapTrap::get_name() << " and my real name is " << get_dt_name() << " . This is confusing...." << std::endl;
}