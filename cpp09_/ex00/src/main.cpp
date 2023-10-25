/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 13:43:53 by mgraefen          #+#    #+#             */
/*   Updated: 2023/10/23 13:53:08 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv){

	if(argc != 2){
		std::cout << "Error: too many or to few arguments." << std::endl;
		return 1;
	}
	std::string filename = argv[1];
	BitcoinExchange::init(filename);
	return 0;
}