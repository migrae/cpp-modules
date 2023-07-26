/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 13:01:08 by mgraefen          #+#    #+#             */
/*   Updated: 2023/06/07 15:59:32 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pb.hpp"

void print_divider(char c, int w)
{
	std::cout << std::setw(w) << std::setfill(c) << "" << std::endl
	<< std::setfill(' ');
}

bool is_number(const std::string& s) {
    return std::all_of(s.begin(), s.end(), ::isdigit);
}

void menu(void)
{
	std::cout << "|------------------------------------------|" << std::endl
						<< "| Use 'ADD' to add a new contact           |" << std::endl
						<< "| Use 'SEARCH' to search for a contact     |" << std::endl
						<< "| Use 'EXIT' to close the phonebook        |" << std::endl
						<< "|------------------------------------------|" << std::endl;
	print_divider(' ', 42);
}

int main(void) {
  	PhoneBook my_phonebook;
	std::string input;
	menu();
	while(std::getline(std::cin, input))
	{
		if (input == "EXIT")
			break ;
		else if (input == "ADD")
			my_phonebook.add_contact();
		else if (input == "SEARCH")
			my_phonebook.display_contacts();
		else
			std::cout << "Not a valid input. Use ADD, SEARCH or EXIT" << std::endl;
		menu();
	}
  return (0);
}