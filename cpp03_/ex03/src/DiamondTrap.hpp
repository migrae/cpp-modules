/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 15:16:49 by mgraefen          #+#    #+#             */
/*   Updated: 2023/07/07 11:51:19 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap { 

	public:
	DiamondTrap(void);
	~DiamondTrap(void);
	DiamondTrap(const DiamondTrap &rhs);
	DiamondTrap &operator=(const DiamondTrap &rhs);
	DiamondTrap(const std::string name);

	
	using ScavTrap::attack;
	void whoAmI();
	std::string get_dt_name();

	private:
	std::string _name;
	
};

#endif