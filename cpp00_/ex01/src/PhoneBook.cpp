/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 13:08:54 by mgraefen          #+#    #+#             */
/*   Updated: 2023/06/12 10:33:11 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pb.hpp"

PhoneBook::PhoneBook(void) {
  std::cout << "|------------------------------------------|" << std::endl;
  std::cout << "|-------------Phonebook loading------------|" << std::endl;
  std::cout << "|__________________________________________|" << std::endl;
  print_divider(' ', 42);
  contact_index = 0;
  full = false;
  return;
}

PhoneBook::~PhoneBook(void) {
	std::cout << "|------------------------------------------|" << std::endl;
  std::cout << "|-------------Phonebook closing------------|" << std::endl;
  std::cout << "|__________________________________________|" << std::endl;
  print_divider(' ', 42);
  return;
}

void PhoneBook::add_contact(void) {
  std::string input[5];

  std::cout << "Enter first name ";
  std::getline(std::cin, input[0]);
  std::cout << "Enter last name ";
  std::getline(std::cin, input[1]);
  std::cout << "Enter nickname ";
  std::getline(std::cin, input[2]);
  std::cout << "Enter phone number ";
  std::getline(std::cin, input[3]);
  std::cout << "Enter the persons darkest secret ";
  std::getline(std::cin, input[4]);
  contacts[contact_index] =
      Contact(input[0], input[1], input[2], input[3], input[4]);
  contact_index++;
  if (contact_index >= 8) {
    full = true;
    contact_index = 0;
  }
  print_divider(' ', 42);
  return;
}

void PhoneBook::display_contacts(void) {
  std::string index_num;

  if (contact_index == 0 && full == false) {
    std::cout << "Phonebook is empty!" << std::endl;
    return;
  }
  print_divider(' ', 44);
  std::cout << std::setw(10) << std::right << "INDEX#" << '|'
						<< std::setw(10) << std::right << "FIRST NAME" << '|'
						<< std::setw(10) << std::right << "LAST NAME" << '|'
						<< std::setw(10) << std::right << "NICKNAME" << '|'
						<< std::endl;
  print_divider('-', 44);
  if (full == true)
    for (int i = 0; i < 8; ++i) {
      std::cout << std::setw(10) << std::right << i << "|";
      contacts[i].print_contact_preview();
    }
  else
    for (int i = 0; i < contact_index; ++i) {
      std::cout << std::setw(10) << std::right << i << "|";
      contacts[i].print_contact_preview();
    }
  print_divider(' ', 44);
  contacts[get_index()].print_contact_details();
}

int PhoneBook::get_index(void) {
  std::string index;

  while (1) {
    std::cout << "Please type in a valid index number of the contact you want "
                 "to see in detail"
              << std::endl;
    std::getline(std::cin, index);
    if (index.length() == 1 && is_number(index) == true)
      if (std::stoi(index) >= 0 && std::stoi(index) < 8) {
        if (full == true) return (std::stoi(index));
        if (contact_index > std::stoi(index)) return (std::stoi(index));
      }
  }
}
