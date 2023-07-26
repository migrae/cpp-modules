/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:44:17 by mgraefen          #+#    #+#             */
/*   Updated: 2023/07/06 15:57:58 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
    : AForm("ShrubberyCreationForm", 145, 137) {
  return;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
    : AForm("ShrubberyCreationForm", 145, 137), _target(target) {
  return;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& rhs)
    : AForm(rhs), _target(rhs._target) {
  return;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(
    const ShrubberyCreationForm& rhs) {
  (void)rhs;
  return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm() { return; }

void ShrubberyCreationForm::execute(Bureaucrat const& executor) const {
  AForm::execute(executor);
  std::ofstream ofs(_target + "_shrubbery");
  if (!ofs) {
    std::cerr << "Could not create the file " << (_target + "_shrubbery")
              << std::endl;
  }
  std::string tree =
      "      ^^^\n"
      "     ^^^^^\n"
      "    ^^^^^^^\n"
      "   ^^^^^^^^^\n"
      "  ^^^^^^^^^^^\n"
      " ^^^^^^^^^^^^^\n"
      "^^^^^^^^^^^^^^^\n"
      "       |||\n"
      "       |||\n";

  ofs << tree;
}