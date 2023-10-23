/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 09:58:35 by mgraefen          #+#    #+#             */
/*   Updated: 2023/10/23 11:29:34 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main (int argc, char **argv){
	if (argc == 2)
	{
		std::string str = argv[1];
		try{
			if(!RPN::solve(str)){
				std::cout << "Error" << std::endl;
				return 1;
			}
		}
		catch(std::exception &e){
			std::cout << e.what() << "hhhh" << std::endl;
		}
	}
	else{
		std::cout << "Error" << std::endl;
		return 1;
	}
	return 0;
}