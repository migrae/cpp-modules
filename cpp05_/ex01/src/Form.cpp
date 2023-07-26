/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 19:22:40 by mgraefen          #+#    #+#             */
/*   Updated: 2023/07/06 09:15:16 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form()
    : _name("unnamed"), _grade_sign(1), _grade_execute(1), _signed(false) {
  return;
}

Form::Form(std::string name, int grade_sign, int grade_execute)
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

Form::~Form() { return; }

Form::Form(const Form &rhs)
    : _name(rhs._name),
      _grade_sign(rhs._grade_sign),
      _grade_execute(rhs._grade_execute),
      _signed(false) {}

Form &Form::operator=(const Form &rhs) {
  if (this != &rhs) this->_signed = rhs._signed;
  return (*this);
}

const std::string &Form::getName() const { return (_name); }
const int &Form::getGradeSign() const { return (_grade_sign); }
const int &Form::getGradeExecute() const { return (_grade_execute); };
const bool &Form::getSignStatus() const { return (_signed); }

void Form::beSigned(const Bureaucrat &Signer)
{
	  if (Signer.getGrade() > _grade_sign)
    	throw GradeTooLowException();
		else if (_signed == true){
			throw FormAlreadySignedException();
		}
		_signed = true;
}

std::ostream &operator<<(std::ostream &o, const Form &rhs) {
  o << rhs.getName() << " Form, Sign Grade: " << rhs.getGradeSign()
    << ", Execute Grade: " << rhs.getGradeExecute()
    << ", Signed Status: " << rhs.getSignStatus();
  return (o);
}

const char *Form::GradeTooHighException::what() const throw(){
	return("The grade you try to use on a form is too high");
}

const char *Form::GradeTooLowException::what() const throw(){
	return("The grade you try to use on a form is too low");
}

const char *Form::FormAlreadySignedException::what() const throw(){
	return("The form you try to sign is already signed");
}

