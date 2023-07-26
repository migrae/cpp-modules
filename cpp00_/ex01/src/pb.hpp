/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.hpp                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 13:06:25 by mgraefen          #+#    #+#             */
/*   Updated: 2023/06/07 14:36:16 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PB_HPP
#define PB_HPP
#include <algorithm>
#include <iomanip>
#include <iostream>
#include <string>

#include "Contact.hpp"
#include "PhoneBook.hpp"

void print_divider(char c, int w);
bool is_number(const std::string& s);

#endif
