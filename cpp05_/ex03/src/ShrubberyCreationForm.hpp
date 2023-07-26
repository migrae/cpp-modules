/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm_HPP.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:42:21 by mgraefen          #+#    #+#             */
/*   Updated: 2023/07/06 15:43:02 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
	
	public:
	ShrubberyCreationForm(const ShrubberyCreationForm &rhs);
	ShrubberyCreationForm&	operator=(const ShrubberyCreationForm& rhs);
	ShrubberyCreationForm(const std::string& target);
	~ShrubberyCreationForm();
	void execute(Bureaucrat const & executor) const;
	
	private:
	ShrubberyCreationForm();
	std::string _target;
};

#endif