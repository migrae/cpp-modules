/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 15:14:41 by mgraefen          #+#    #+#             */
/*   Updated: 2023/06/21 15:14:54 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal{
public:
WrongAnimal(void);
WrongAnimal(const WrongAnimal &rhs);
WrongAnimal &operator=(const WrongAnimal &rhs);
~WrongAnimal(void);

void makeSound() const;
void setType(std::string type);
std::string getType(void) const;

protected:
std::string _type;
};

#endif