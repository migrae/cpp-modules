/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 13:17:20 by mgraefen          #+#    #+#             */
/*   Updated: 2023/07/06 16:48:41 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
    : AForm("PresidentialPardonForm", 25, 5) {
  return;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
    : AForm("PresidentialPardonForm", 25, 5), _target(target) {
  return;
}

PresidentialPardonForm::PresidentialPardonForm(
    const PresidentialPardonForm& rhs)
    : AForm(rhs), _target(rhs._target) {
  return;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(
    const PresidentialPardonForm& rhs) {
  (void)rhs;
  return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() { return; }

void PresidentialPardonForm::execute(Bureaucrat const& executor) const {
  AForm::execute(executor);
  std::cout << _target << " has been pardoned by Zaphod Beeblebrox"
            << std::endl;
}