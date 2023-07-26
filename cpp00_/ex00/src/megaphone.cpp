/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 13:09:54 by mgraefen          #+#    #+#             */
/*   Updated: 2023/06/05 14:16:12 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char *argv[]) {
  if (argc == 1) {
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return (0);
  }
  for (int i = 1; argv[i] != NULL; ++i)
	{
		std::string current_string = argv[i];
    for (std::string::size_type j = 0; j < current_string.length(); ++j)
      current_string.at(j) = std::toupper(current_string.at(j));
		std::cout << current_string;
	}
  std::cout << std::endl;
  return (0);
}