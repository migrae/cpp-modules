/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 14:32:59 by mgraefen          #+#    #+#             */
/*   Updated: 2023/07/18 15:41:27 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

	#include "MateriaSource.hpp"
	
	MateriaSource::MateriaSource() : _num_learned(0) {
		for(int i = 0; i < 4; i++)
			this->_materias[i] = NULL;
		std::cout << "[CONSTRUCTOR] Materia Source constructed" << std::endl;
	}
	
	MateriaSource::~MateriaSource(){
		for(int i = 0; i < 4; i++)
		{
			if(this->_materias[i])
				delete this->_materias[i];
			std::cout << "[DESTRUCTOR] Materia Source destructed" << std::endl;
		}
	}
	MateriaSource::MateriaSource(const MateriaSource &obj){
			if(this != &obj)
				for(int i = 0; i < 4; i++){
					if(obj._materias[i])
						_materias[i] = obj._materias[i]->clone();
					else
						_materias[i] = NULL;
				}
			std::cout << "[CONSTRUCTOR] Materia Source Copy Constructor" << std::endl;
	}
	
	MateriaSource MateriaSource::operator=(const MateriaSource &obj){
		if(this != &obj)
		{
			for(int i = 0; i < 4; i++)
			{
				if(this->_materias[i])
				{
					delete this->_materias[i];
					this->_materias[i] = NULL;
				}
				if(obj._materias[i])
					this->_materias[i] = obj._materias[i]->clone();
				else
					this->_materias[i] = NULL;
			}
			std::cout << "Materia Source Copy Assignment" << std::endl;
		}
		return(*this);
	}

	int MateriaSource::getNumLearned(){
		return(this->_num_learned);
	}

	void MateriaSource::learnMateria(AMateria *materia_to_learn) {
		if(!materia_to_learn)
		{
			std::cout << "[LEARN - ERROR] Materia does not exist" << std::endl;
			return ;
		}
		if(this->_num_learned == 4)
		{
			std::cout << "[LEARN - ERROR] Source is full" << std::endl;
			return;
		}
		_materias[this->_num_learned] = materia_to_learn;
		_num_learned++;
		std::cout << "[LEARN - SUCCESS] Materia " << materia_to_learn->getType() << " learned" << std::endl;
	}
	
  AMateria* MateriaSource::createMateria(std::string const& type) {
		for(int i = _num_learned; i >= 0; i--)
			if(this->_materias[i] && this->_materias[i]->getType() == type)
			{
				std::cout << "[CREATE] " << this->_materias[i]->getType() << std::endl;
				return(this->_materias[i]->clone());
			}
		std::cout << "[CREATE - ERROR] Materia " << type << " not found in Source" << std::endl;
		return (NULL);
	}