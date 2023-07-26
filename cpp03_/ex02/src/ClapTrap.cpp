/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 15:02:32 by mgraefen          #+#    #+#             */
/*   Updated: 2023/06/21 10:37:12 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _hit_points(10), _energy_points(10), _attack_damage(0) {
  std::cout << "ClapTrap created" << std::endl;
  return;
}

ClapTrap::ClapTrap(std::string name)
    : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0) {
  std::cout << "ClapTrap created with the following stats - NAME: " << _name
            << " HP: " << get_hp() << " EP: " << get_ep() << " AP: " << get_ap()
            << std::endl;
  return;
}

ClapTrap::ClapTrap(const ClapTrap &rhs)
    : _name(rhs._name),
      _hit_points(rhs._hit_points),
      _energy_points(rhs._energy_points),
      _attack_damage(rhs._attack_damage) {
  return;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &rhs)
 {
	_name = rhs._name;
	_hit_points = rhs._hit_points;
	_energy_points = rhs._energy_points;
	_attack_damage = rhs._attack_damage;
  return (*this);
}

ClapTrap::~ClapTrap(void) {
  std::cout << "Clap Trap " << get_name() << " destructed" << std::endl;
  return;
}

/// GETTER /////////////////////
std::string ClapTrap::get_name(void) { return (_name); }
int ClapTrap::get_hp(void) { return (_hit_points); }
int ClapTrap::get_ep(void) { return (_energy_points); }
int ClapTrap::get_ap(void) { return _attack_damage; }

/// ACTIONS /////////////////////
void ClapTrap::attack(const std::string &target) {
  std::cout << get_name();
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
  std::cout << " attacks " << target << " ,causing " << get_ap()
            << " points of damage !" << std::endl;
  _energy_points--;
}

void ClapTrap::takeDamage(unsigned int amount) {
  std::cout << get_name() << " has " << get_hp() << " HP and gets hit by "
            << amount << " damage.";
  subtract_hp(amount);
  if (get_hp() == 0)
    std::cout << " It died, RIP my clunky friend" << std::endl;
  else
    std::cout << " Now it has " << get_hp() << " HP." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
  std::cout << get_name();
  if (get_hp() == 0) {
    std::cout
        << " can't repair itself, because it is dead. Sorry for your loss :("
        << std::endl;
    return;
  }
  if (get_ep() == 0) {
    std::cout << " can't repair itself, because it has no energy left. Go get "
                 "some sleep, or whatever ClapTrap thingys do"
              << std::endl;
    return;
  }
  add_hp(amount);
  _energy_points--;
  std::cout << " was repaired by " << amount << " Points and now has "
            << get_hp() << " HP." << std::endl;
}

// SETTER
void ClapTrap::subtract_hp(unsigned int amount) {
  if ((long)(get_hp() - amount) < INT_MIN)
    _hit_points = 0;
  else
    _hit_points -= amount;
  if (get_hp() < 0) _hit_points = 0;
}

void ClapTrap::add_hp(unsigned int amount) {
  if ((long)(get_hp() + amount) > INT_MAX)
    _hit_points = INT_MAX;
  else
    _hit_points += amount;
}