/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 14:31:51 by mgraefen          #+#    #+#             */
/*   Updated: 2023/06/26 09:12:24 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
 public:
	MateriaSource();
	~MateriaSource();
	
	MateriaSource(const MateriaSource &obj);
	MateriaSource operator=(const MateriaSource &obj);

	void learnMateria(AMateria *materia_to_learn);
  AMateria* createMateria(std::string const& type);
	int getNumLearned();

 private:
 AMateria* _materias[4];
 int	_num_learned;
 
};
