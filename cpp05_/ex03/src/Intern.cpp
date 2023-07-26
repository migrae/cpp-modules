/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 17:12:22 by mgraefen          #+#    #+#             */
/*   Updated: 2023/07/07 11:24:36 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
  std::cout << "Intern created" << std::endl;
  return;
}

Intern::~Intern() { return; }

Intern::Intern(const Intern &rhs) {
  (void)rhs;
  return;
}

Intern &Intern::operator=(const Intern &rhs) {
  (void)rhs;
  return (*this);
}

const char *Intern::FormDoesNotExist::what() const throw() {
  return ("The requested form does not exist");
}

AForm *Intern::makeForm(std::string form, std::string target) {
  std::string form_array[] = {"Robotomy Request", "Shrubbery Creation",
                              "Presidental Pardon"};
  int form_num = 0;

  for (int i = 0; i < 3; ++i)
    if (form_array[i] == form) form_num = i + 1;
  switch (form_num) {
    case 1:
      std::cout << "Intern creates RobotomyRequestForm" << std::endl;
      return (new RobotomyRequestForm(target));
      break;
    case 2:
      std::cout << "Intern creates ShrubberyCreationForm" << std::endl;
      return (new ShrubberyCreationForm(target));
      break;
    case 3:
      std::cout << "Intern creates PresidentialPardonForm" << std::endl;
      return (new PresidentialPardonForm(target));
      break;
    default:
      throw FormDoesNotExist();
  }
}