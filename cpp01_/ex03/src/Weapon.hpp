/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 10:59:28 by mgraefen          #+#    #+#             */
/*   Updated: 2023/06/13 12:05:28 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>
#include <string>
class Weapon{
	
	private:
	std::string	type;
	public:
	Weapon (void);
	Weapon (std::string s);
	~Weapon (void);
	std::string const & getType(void) const;
	void setType(std::string s);
};

#endif