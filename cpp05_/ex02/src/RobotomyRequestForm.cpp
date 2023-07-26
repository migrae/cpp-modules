/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 14:55:39 by mgraefen          #+#    #+#             */
/*   Updated: 2023/07/06 16:48:56 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
    : AForm("RobotomyRequestForm", 72, 45) {
  return;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
    : AForm("RobotomyRequestForm", 72, 45), _target(target) {
  return;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& rhs)
    : AForm(rhs), _target(rhs._target) {
  return;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(
    const RobotomyRequestForm& rhs) {
  (void)rhs;
  return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm() { return; }

void RobotomyRequestForm::execute(Bureaucrat const& executor) const {
  AForm::execute(executor);
  std::cout << "Drilling Noises ~~~~~~~ Robotomy on " << _target << " was ";
  srand(time(NULL));
  if (rand() % 2 == 0)
    std::cout << "successful!" << std::endl;
  else
    std::cout << "not successful! Sorrrryyyyyyyyy!" << std::endl;
}