/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 12:57:44 by mgraefen          #+#    #+#             */
/*   Updated: 2023/07/18 14:21:35 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
public:
Cat(void);
Cat(const Cat &rhs);
Cat &operator=(const Cat &rhs);
~Cat(void);

void setIdea(int, std::string);
void printIdea(int it);
void makeSound() const;

private:
Brain *_my_Brain;
};

#endif