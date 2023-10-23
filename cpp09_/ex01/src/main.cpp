/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 09:58:35 by mgraefen          #+#    #+#             */
/*   Updated: 2023/10/23 13:40:11 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main (int argc, char **argv){
	if (argc == 2)
	{
		std::string str = argv[1];
		try{
			if(!RPN::solve(str)){
				return 1;
			}
		}
		catch(std::exception &e){
			std::cout << e.what() << std::endl;
		}
	}
	else{
		std::cout << "Error" << std::endl;
		return 1;
	}
	return 0;
}