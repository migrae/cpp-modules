/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 19:07:44 by mgraefen          #+#    #+#             */
/*   Updated: 2023/07/06 13:10:02 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include <string>
#include <iostream>
#include <fstream>
#include <climits>

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm {
	
	public:
	AForm();
	AForm(std::string name, int grade_sign, int grade_execute);
	~AForm();
	AForm(const AForm &rhs);
	AForm &operator=(const AForm &rhs);

	//Getter
	const std::string &getName() const;
	const int &getGradeSign() const;
	const int &getGradeExecute() const;
	const bool &getSignStatus() const;

	//MemberFunctions:
	void beSigned(const Bureaucrat &Signer);
	virtual void execute(Bureaucrat const & executor) const = 0;

	
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
	
	class AFormAlreadySignedException : public std::exception{
	public:
	virtual const char* what() const throw();
	};

	class AFormNotSignedException : public std::exception{
	public:
	virtual const char* what() const throw();
	};
};

std::ostream&	operator<<(std::ostream &o, const AForm& rhs);

#endif