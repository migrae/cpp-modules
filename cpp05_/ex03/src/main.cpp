/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 15:24:25 by mgraefen          #+#    #+#             */
/*   Updated: 2023/07/07 11:24:42 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void) {
  Bureaucrat KarlHeinz("Karl Heinz", 5);
  Intern Jason;
  AForm *the_form;

  try {
    the_form = Jason.makeForm("", "The neighbour");
  } catch (std::exception &e) {
    std::cout << "Intern can't create Form because: " << e.what() << std::endl;
  }
  try {
    the_form = Jason.makeForm("Robotomy Request", "The neighbour");
  } catch (std::exception &e) {
    std::cout << "Intern can't create Form because: " << e.what() << std::endl;
  }
  KarlHeinz.signForm(*the_form);
  KarlHeinz.executeForm(*the_form);
  the_form =
      Jason.makeForm("Presidental Pardon", "For wearing no shoes, Laurin");
  KarlHeinz.signForm(*the_form);
  KarlHeinz.executeForm(*the_form);
  the_form = Jason.makeForm("Shrubbery Creation", "Philipps Splitkeyboard");
  KarlHeinz.signForm(*the_form);
  KarlHeinz.executeForm(*the_form);

  delete the_form;
  return (0);
}