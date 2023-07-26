/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/19 09:30:26 by mgraefen          #+#    #+#             */
/*   Updated: 2023/06/19 15:03:05 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FragTrap_HPP
#define FragTrap_HPP
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap { 

	public:
	FragTrap(void);
	~FragTrap(void);
	FragTrap(const FragTrap &rhs);
	FragTrap &operator=(const FragTrap &rhs);
	FragTrap(std::string name);

	void highFivesGuys(void);
	
};

#endif