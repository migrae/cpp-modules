/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 13:43:13 by mgraefen          #+#    #+#             */
/*   Updated: 2023/10/23 09:06:39 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <string>
#include <iostream>

class notFound : public std::exception{
public:
virtual const char* what() const throw();
};

const char *notFound::what() const throw() {
  return ("Whatever you are searching, it is not in this container.");
}

template <typename Container>
int easyfind(Container container, int toFind)
{
	typename Container::iterator it;
	
	it = std::find(container.begin(), container.end(), toFind);
	if(it != container.end())
		return static_cast<int>(std::distance(container.begin(), it));
	else
		throw notFound();
}

	
#endif
