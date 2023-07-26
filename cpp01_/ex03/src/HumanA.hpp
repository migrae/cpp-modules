/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 11:11:55 by mgraefen          #+#    #+#             */
/*   Updated: 2023/06/13 12:16:21 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP
#include <iostream>
#include "Weapon.hpp"
class HumanA{
	
	public:
	~HumanA (void);
	HumanA (std::string name, Weapon &weapon);
	void attack(void);
	private:
	//HumanA (void);
	std::string	name;
	Weapon &weapon;
};

#endif