/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.cpp                                          :+:      :+:    :+: */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 19:22:40 by mgraefen          #+#    #+#             */
/*   Updated: 2023/07/06 13:09:25 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm()
    : _name("unnamed"), _grade_sign(1), _grade_execute(1), _signed(false) {
  return;
}

AForm::AForm(std::string name, int grade_sign, int grade_execute)
    : _name(name),
      _grade_sign(grade_sign),
      _grade_execute(grade_execute),
      _signed(false) {
  if (_grade_sign < GRADE_MAX || _grade_execute < GRADE_MAX)
    throw GradeTooHighException();
  else if (_grade_sign > GRADE_MIN || _grade_execute > GRADE_MIN)
    throw GradeTooLowException();
  std::cout << *this << " constructed." << std::endl;
}

AForm::~AForm() { return; }

AForm::AForm(const AForm &rhs)
    : _name(rhs._name),
      _grade_sign(rhs._grade_sign),
      _grade_execute(rhs._grade_execute),
      _signed(false) {}

AForm &AForm::operator=(const AForm &rhs) {
  if (this != &rhs) this->_signed = rhs._signed;
  return (*this);
}

const std::string &AForm::getName() const { return (_name); }
const int &AForm::getGradeSign() const { return (_grade_sign); }
const int &AForm::getGradeExecute() const { return (_grade_execute); };
const bool &AForm::getSignStatus() const { return (_signed); }

void AForm::beSigned(const Bureaucrat &Signer) {
  if (_signed == true)
    throw AFormAlreadySignedException();
  else if (Signer.getGrade() > _grade_sign)
    throw GradeTooLowException();
  _signed = true;
}

void AForm::execute(Bureaucrat const &executor) const {
  if (_signed != true)
    throw AFormNotSignedException();
  else if (executor.getGrade() > _grade_execute)
    throw GradeTooLowException();
  else
    std::cout << executor.getName() << " executes " << _name << std::endl;
}

std::ostream &operator<<(std::ostream &o, const AForm &rhs) {
  o << rhs.getName() << " AForm, Sign Grade: " << rhs.getGradeSign()
    << ", Execute Grade: " << rhs.getGradeExecute()
    << ", Signed Status: " << rhs.getSignStatus();
  return (o);
}

const char *AForm::GradeTooHighException::what() const throw() {
  return ("The grade you try to use on a form is too high");
}

const char *AForm::GradeTooLowException::what() const throw() {
  return ("The grade you try to use on a form is too low");
}

const char *AForm::AFormAlreadySignedException::what() const throw() {
  return ("The form you try to sign is already signed");
}

const char *AForm::AFormNotSignedException::what() const throw() {
  return ("The form you try to execute is not signed");
}
