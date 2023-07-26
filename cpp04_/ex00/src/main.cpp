/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/21 14:29:58 by mgraefen          #+#    #+#             */
/*   Updated: 2023/07/19 11:04:32 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();
std::cout << std::endl;
std::cout << "Now the wrong stuff" << std::endl;
std::cout << std::endl;
delete meta;
delete j;
delete i;

const WrongAnimal* wrongmeta = new WrongAnimal();
const WrongAnimal* i_wrong = new WrongCat();
std::cout << i_wrong->getType() << " " << std::endl;
i_wrong->makeSound(); 
wrongmeta->makeSound();
delete i_wrong;
delete wrongmeta;

return 0;
}