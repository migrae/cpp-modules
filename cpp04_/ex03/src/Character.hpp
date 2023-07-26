/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 13:56:59 by mgraefen          #+#    #+#             */
/*   Updated: 2023/07/07 13:33:49 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter{
 public:
	Character();
	Character(std::string name);
	~Character();
	Character(const Character &obj);
	Character operator=(const Character &obj);
	
	std::string const & getName() const;
	void equip(AMateria* m);
	AMateria *return_pointer(int idx);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
	int getNumEquipped() const;

 private:
 std::string _name;
 AMateria *_slot[4];
 int _num_equipped;
};

#endif