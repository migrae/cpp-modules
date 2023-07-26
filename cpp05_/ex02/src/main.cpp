/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 15:24:25 by mgraefen          #+#    #+#             */
/*   Updated: 2023/07/06 16:48:21 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void) {
  Bureaucrat KarlHeinz("Karl Heinz", 26);
  Bureaucrat LazyLarry("LazyLarry", 150);
  PresidentialPardonForm ppf("The cat");
  RobotomyRequestForm rrf("The neighbour");
	ShrubberyCreationForm scf("The local supermarket");

	KarlHeinz.executeForm(ppf);
	KarlHeinz.signForm(ppf);
	KarlHeinz.increment(21);
	KarlHeinz.signForm(ppf);
	KarlHeinz.executeForm(ppf);
	KarlHeinz.signForm(rrf);
	KarlHeinz.signForm(scf);
	LazyLarry.executeForm(rrf);
	LazyLarry.executeForm(scf);
	KarlHeinz.executeForm(rrf);
	KarlHeinz.executeForm(scf);
	return (0);

}