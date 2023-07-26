/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 14:53:10 by mgraefen          #+#    #+#             */
/*   Updated: 2023/07/13 13:07:47 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <string>
#include <iostream>
#include <climits>

class ClapTrap{
	public:

	ClapTrap(void);
	virtual ~ClapTrap(void);
	ClapTrap(const ClapTrap &rhs);
	ClapTrap &operator=(const ClapTrap &rhs);
	ClapTrap(std::string name);

	std::string get_name();
	int get_hp();
	int get_ep();
	int get_ap();
	
	virtual void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	
	protected:
	void subtract_hp(unsigned int);
	void add_hp(unsigned int);
	std::string _name;
	int	_hit_points;
	int _energy_points;
	int	_attack_damage;
};

#endif