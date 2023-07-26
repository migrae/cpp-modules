/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 13:08:59 by mgraefen          #+#    #+#             */
/*   Updated: 2023/06/07 16:40:55 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H
#include "pb.hpp"

class PhoneBook {
 public:
  PhoneBook(void);
  ~PhoneBook(void);
  void add_contact(void);
  void display_contacts(void);

 private:
  Contact contacts[8];
  int contact_index;
  bool full;
  int get_index(void);
};

#endif