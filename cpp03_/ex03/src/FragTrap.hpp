/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 09:30:26 by mgraefen          #+#    #+#             */
/*   Updated: 2023/06/21 09:16:24 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap { 

	public:
	FragTrap(void);
	~FragTrap(void);
	FragTrap(const FragTrap &rhs);
	FragTrap &operator=(const FragTrap &rhs);
	FragTrap(std::string name);

	void highFivesGuys(void);
	
};

#endif