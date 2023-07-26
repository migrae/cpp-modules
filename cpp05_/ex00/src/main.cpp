/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 15:24:25 by mgraefen          #+#    #+#             */
/*   Updated: 2023/07/03 18:58:16 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main (void){

	Bureaucrat KarlHeinz("Karl Heinz", 23);
	try {
		KarlHeinz.increment(22);
		KarlHeinz.decrement(149);
		KarlHeinz.decrement(1);
	}
	catch (std::exception& e){
		std::cout << e.what() << std::endl;
	}
	try {
				KarlHeinz.increment(23);
				KarlHeinz.increment(127);
	}
	catch (std::exception& e){
		std::cout << e.what() << std::endl;
	}
	return(0);
}