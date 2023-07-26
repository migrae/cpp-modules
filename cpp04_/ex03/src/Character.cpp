/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 14:12:08 by mgraefen          #+#    #+#             */
/*   Updated: 2023/07/18 15:44:32 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

	Character::Character() : _name(""), _num_equipped(0)
	{
		for(int i = 0; i < 4; i++)
			this->_slot[i] = NULL;
		std::cout << "[CONSTRUCTOR] Character created" << std::endl;
		return ;
	}
	
	Character::Character(std::string name) : _name(name), _num_equipped(0) {
		for(int i = 0; i < 4; i++)
			this->_slot[i] = NULL;
		std::cout << "[CONSTRUCTOR] Character " << getName() << " created" << std::endl;
		return ;
	}
	
	Character::~Character(){
		for(int i = 0; i < 4; i++)
			if(this->_slot[i])
				delete this->_slot[i];
		std::cout << "[DESTRUCTOR] Character " << getName() << " destructed" << std::endl;
		return ;
	}
	
	Character::Character(const Character &obj){
		for(int i = 0; i < 4; i++){
			if(obj._slot[i])
				this->_slot[i] = obj._slot[i]->clone();
			else
				this->_slot[i] = NULL;
		}
		this->_name = obj._name;
		this->_num_equipped = obj._num_equipped;
		return ;
	}
	
	Character Character::operator=(const Character &obj){
		if(this != &obj){
			for(int i = 0; i < 4; i++)
			{
				if(_slot[i]){
					delete _slot[i];
					this->_slot[i] = NULL;
				}
				if(obj._slot[i])
					this->_slot[i] = obj._slot[i]->clone();
				else
					this->_slot[i] = NULL;
			}
			this->_name = obj.getName();
			this->_num_equipped = obj.getNumEquipped();
		}
		return(*this);
	}

	std::string const & Character::getName() const{
		return(_name);
	}
	
	int Character::getNumEquipped() const{
		return(_num_equipped);
	}
	
	void Character::equip(AMateria* m){
		if(!m){
			std::cout << "[EQUIP ERROR] Materia does not exist" << std::endl;
			return ;
		}
		if(getNumEquipped() == 4){
			std::cout << "[EQUIP ERROR] Inventory is full. Materia " << m->getType() << " dropped" << std::endl;
			return ;
		}
		_slot[getNumEquipped()] = m;
		_num_equipped++;
	}

	AMateria *Character::return_pointer(int idx){
		if(_slot[idx])
			return(_slot[idx]);
		return NULL;
	}
	
	void Character::unequip(int idx){
		if(idx > 3 || idx < 0){
			std::cout << "[UNEQUIP - ERROR] Slot does not exist" << std::endl;
			return ;
		}
		if(_slot[idx] == NULL){
			std::cout << "[UNEQUIP - ERROR] Slot is currently empty" << std::endl;
			return ;
		}
		std::cout << "Slot " << idx << " unequipped. It contained " << _slot[idx]->getType() << std::endl;
		_slot[idx] = NULL;
		_num_equipped--;
	}
	
	void Character::use(int idx, ICharacter& target){
		if(idx > 3 || idx < 0){
			std::cout << "[USE - ERROR] Slot does not exist" << std::endl;
			return ;
		}
		if(_slot[idx] == NULL){
			std::cout << "[USE - ERROR] Slot is currently empty" << std::endl;
			return ;
		}
		_slot[idx]->use(target);
	}