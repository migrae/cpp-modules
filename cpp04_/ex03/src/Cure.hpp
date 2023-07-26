/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 13:47:27 by mgraefen          #+#    #+#             */
/*   Updated: 2023/06/26 10:46:00 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP
#include <string>
#include "Character.hpp"
#include "AMateria.hpp"

class Cure : public AMateria {
 protected:
	std::string _type;
	public :
	Cure();
	Cure(const Cure &rhs);
	Cure(std::string const& type);
	Cure &operator=(const Cure &rhs);
	~Cure();
	
  std::string const& getType() const;  // Returns the materia type
  Cure* clone() const;
  void use(ICharacter& target);
};

#endif