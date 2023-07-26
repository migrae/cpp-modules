/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 17:03:01 by mgraefen          #+#    #+#             */
/*   Updated: 2023/07/07 11:24:49 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
 public:
  Intern();
  ~Intern();
  Intern(const Intern &rhs);
  Intern &operator=(const Intern &rhs);

  AForm *makeForm(std::string form, std::string target);

 private:
  class FormDoesNotExist : public std::exception {
   public:
    virtual const char *what() const throw();
  };
};

#endif