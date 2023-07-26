/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 13:07:33 by mgraefen          #+#    #+#             */
/*   Updated: 2023/07/06 14:53:52 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTALPARDONFORM_HPP
#define PRESIDENTALPARDONFORM_HPP
#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
	
	public:
	PresidentialPardonForm(const PresidentialPardonForm &rhs);
	PresidentialPardonForm&	operator=(const PresidentialPardonForm& rhs);
	PresidentialPardonForm(const std::string& target);
	~PresidentialPardonForm();
	void execute(Bureaucrat const & executor) const;
	
	private:
	PresidentialPardonForm();
	std::string _target;
};

#endif