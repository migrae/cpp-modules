/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 10:37:24 by mgraefen          #+#    #+#             */
/*   Updated: 2023/06/26 10:41:41 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <string>
#include <iostream>
#include "ICharacter.hpp"
#include "Character.hpp"

class AMateria {
 protected:
	std::string _type;
	
	public :
	AMateria(std::string const& type);
	AMateria();
	virtual ~AMateria();
  std::string const& getType() const;  // Returns the materia type
  virtual AMateria* clone() const = 0;
  virtual void use(ICharacter& target);
};

#endif