/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 15:25:59 by mgraefen          #+#    #+#             */
/*   Updated: 2023/07/06 16:00:13 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <fstream>
#include <climits>
#include "AForm.hpp"

#define GRADE_MIN 150
#define GRADE_MAX 1

class AForm;

class Bureaucrat {
	public:
	Bureaucrat();
	Bureaucrat(std::string name, int grade);
	~Bureaucrat();
	Bureaucrat(const Bureaucrat &rhs);
	Bureaucrat &operator=(const Bureaucrat &rhs);
	
	const std::string &getName() const;
	const int &getGrade() const;
	void increment(int inc);
	void decrement(int dec);
	void signForm(AForm &sign_form) const;
	void executeForm(AForm const & form);
	
	class GradeTooHighException : public std::exception{
		public:
		virtual const char* what() const throw();
	};
	
	class GradeTooLowException : public std::exception{
		public:
		virtual const char* what() const throw();
	};
	
	private:
	const std::string _name;
	int	_grade;
};

std::ostream&	operator<<(std::ostream &o, const Bureaucrat& rhs);

#endif