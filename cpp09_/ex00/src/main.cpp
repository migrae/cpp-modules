/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 13:43:53 by mgraefen          #+#    #+#             */
/*   Updated: 2023/07/18 08:32:58 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv){

	if(argc != 2){
		std::cout << "Error: could not open file." << std::endl;
		return 1;
	}
	std::string filename = argv[1];
	BitcoinExchange::init(filename);
	return 0;
}