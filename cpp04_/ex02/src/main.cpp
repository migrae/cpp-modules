/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 14:29:58 by mgraefen          #+#    #+#             */
/*   Updated: 2023/07/18 14:40:56 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main() {
  const AAnimal* j = new Dog();
  const AAnimal* i = new Cat();
  delete j;  // should not create a leak
  delete i;
	
  const AAnimal* shelter[4];
  for (int i = 0; i < 4; i++) {
    if (!(i % 2))
      shelter[i] = new Dog();
    else
      shelter[i] = new Cat();
  }

  for (int i = 0; i < 4; i++) {
    shelter[i]->makeSound();
  }

  for (int i = 0; i < 4; i++) {
    delete shelter[i];
  }

/* 	AAnimal *Mute = new AAnimal();
	(void) Mute; */
	//AAnimal TestAnimal;

  return 0;
}