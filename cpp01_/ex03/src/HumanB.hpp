/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 11:12:07 by mgraefen          #+#    #+#             */
/*   Updated: 2023/06/13 12:18:44 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"
class HumanB{
	
	private:
	HumanB (void);
	std::string	name;
	Weapon	*weapon;
	public:
	~HumanB (void);
	HumanB (std::string);
	void attack(void) const;
	void setWeapon(Weapon &weapon);
};

#endif