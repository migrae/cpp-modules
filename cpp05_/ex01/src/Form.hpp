/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 19:07:44 by mgraefen          #+#    #+#             */
/*   Updated: 2023/07/06 13:00:20 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include <iostream>
#include <fstream>
#include <climits>

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	
	public:
	Form();
	Form(std::string name, int grade_sign, int grade_execute);
	~Form();
	Form(const Form &rhs);
	Form &operator=(const Form &rhs);

	//Getter
	const std::string &getName() const;
	const int &getGradeSign() const;
	const int &getGradeExecute() const;
	const bool &getSignStatus() const;

	//MemberFunctions:
	void beSigned(const Bureaucrat &Signer);

	
	private:
	const std::string _name;
	const int _grade_sign;
	const int _grade_execute;
	bool	_signed;

	//Exceptions
	class GradeTooHighException : public std::exception{
	public:
	virtual const char* what() const throw();
	};
	
	class GradeTooLowException : public std::exception{
	public:
	virtual const char* what() const throw();
	};
	
	class FormAlreadySignedException : public std::exception{
	public:
	virtual const char* what() const throw();
	};
};

std::ostream&	operator<<(std::ostream &o, const Form& rhs);

#endif