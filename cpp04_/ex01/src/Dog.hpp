/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 14:49:32 by mgraefen          #+#    #+#             */
/*   Updated: 2023/07/18 14:20:27 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
public:
Dog(void);
Dog(const Dog &rhs);
Dog &operator=(const Dog &rhs);
~Dog(void);

void setIdea(int, std::string);
void printIdea(int it);
void makeSound() const;

private:
Brain *_my_Brain;
};

#endif