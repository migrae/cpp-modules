/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 12:38:25 by mgraefen          #+#    #+#             */
/*   Updated: 2023/06/22 09:27:32 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal{
public:
Animal(void);
Animal(const Animal &rhs);
Animal &operator=(const Animal &rhs);
virtual ~Animal(void);

virtual void makeSound() const;
void setType(std::string type);
std::string getType(void) const;

protected:
std::string _type;
};

#endif