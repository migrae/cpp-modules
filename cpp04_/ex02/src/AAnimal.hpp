/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 12:38:25 by mgraefen          #+#    #+#             */
/*   Updated: 2023/06/22 09:27:32 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <string>
#include <iostream>

class AAnimal {
public:
AAnimal(void);
AAnimal(const AAnimal &rhs);
AAnimal &operator=(const AAnimal &rhs);
virtual ~AAnimal(void);

virtual void makeSound() const = 0;
void setType(std::string type);
std::string getType(void) const;

protected:
std::string _type;
};

#endif