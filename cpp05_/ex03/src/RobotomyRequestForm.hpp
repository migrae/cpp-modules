/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 14:50:08 by mgraefen          #+#    #+#             */
/*   Updated: 2023/07/06 14:55:08 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <cstdlib>

class RobotomyRequestForm : public AForm {
	
	public:
	RobotomyRequestForm(const RobotomyRequestForm &rhs);
	RobotomyRequestForm&	operator=(const RobotomyRequestForm& rhs);
	RobotomyRequestForm(const std::string& target);
	~RobotomyRequestForm();
	void execute(Bureaucrat const & executor) const;
	
	private:
	RobotomyRequestForm();
	std::string _target;
};

#endif