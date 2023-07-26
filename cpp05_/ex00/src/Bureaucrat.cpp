/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 15:27:28 by mgraefen          #+#    #+#             */
/*   Updated: 2023/07/06 09:01:28 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() { return; }

Bureaucrat::Bureaucrat(std::string name, int grade)
    : _name(name), _grade(grade) {
  if (grade < GRADE_MAX)
    throw GradeTooHighException();
  else if (grade > GRADE_MIN)
    throw GradeTooLowException();
  std::cout << *this << " constructed." << std::endl;
}

Bureaucrat::~Bureaucrat() { return; }

Bureaucrat::Bureaucrat(const Bureaucrat &rhs) { *this = rhs; }

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs) {
  if (this != &rhs) this->_grade = rhs._grade;
  return (*this);
}

const std::string &Bureaucrat::getName() const { return (_name); }

const int &Bureaucrat::getGrade() const { return (_grade); }

void Bureaucrat::increment(int inc) {
  if (_grade - inc < GRADE_MAX)
    throw GradeTooHighException();
  else {
    _grade -= inc;
    std::cout << _name << " incremented by " << std::setw(3) << std::left << inc
              << " : Bureaucrat now has Grade: " << _grade << std::endl;
  }
}

void Bureaucrat::decrement(int dec) {
  if (_grade + dec > GRADE_MIN)
    throw GradeTooLowException();
  else {
    _grade += dec;
    std::cout << _name << " decremented by " << std::setw(3) << dec
              << " : Bureaucrat now has Grade: " << _grade << std::endl;
  }
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
  return ("The grade of the Bureaucrat is higher than grade 1");
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
  return ("The grade of the Bureaucrat is lower than grade 150");
}

std::ostream &operator<<(std::ostream &o, const Bureaucrat &rhs) {
  o << rhs.getName() << " Bureaucrat, Grade: " << rhs.getGrade();
  return (o);
}
