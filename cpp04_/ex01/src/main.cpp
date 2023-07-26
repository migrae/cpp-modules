/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 14:29:58 by mgraefen          #+#    #+#             */
/*   Updated: 2023/07/19 11:20:30 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"


int main() {
  const Animal* j = new Dog();
  const Animal* i = new Cat();

  delete j;  // should not create a leak
  delete i;

	std::cout << std::endl;
	std::cout << "Idea test:" << std::endl;
	std::cout << std::endl;
	
	Dog Bello;
	Cat *Tinkabell = new Cat;

	Bello.setIdea(0, "Buy new Bones");
	Tinkabell->setIdea(0, "Eat cat food");

	Dog Benni(Bello);
	Cat Furball = *Tinkabell;

	std::cout << "Bellos idea: " << std::endl;
	Bello.printIdea(0);
	std::cout << "Bennis copied idea: " << std::endl;
	Benni.printIdea(0);
	Bello.setIdea(0, "Smell the poop");
	std::cout << "Bellos new idea: " << std::endl;
	Bello.printIdea(0);
	std::cout << "Bennis old copied idea: " << std::endl;
	Benni.printIdea(0);
	delete Tinkabell;
	Furball.printIdea(0);

	std::cout << std::endl;
	std::cout << "Shelter:" << std::endl;
	std::cout << std::endl;
	
  const Animal* shelter[4];
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

  return 0;
}