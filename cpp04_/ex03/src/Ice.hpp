/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 11:03:01 by mgraefen          #+#    #+#             */
/*   Updated: 2023/06/26 10:36:51 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP
#include "Character.hpp"
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Ice : public AMateria {
 protected:
	std::string _type;
	public :
	Ice();
	Ice(std::string const& type);
	Ice(const Ice &rhs);
	Ice &operator=(const Ice &rhs);
	~Ice();
	
  std::string const& getType() const;  // Returns the materia type
  Ice* clone() const;
  void use(ICharacter& target);
};

#endif