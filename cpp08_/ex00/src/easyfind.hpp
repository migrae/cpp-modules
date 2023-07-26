/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/12 13:43:13 by mgraefen          #+#    #+#             */
/*   Updated: 2023/07/13 08:14:28 by mgraefen         ###   ########.fr       */
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

template <typename Container, typename T>
int easyfind(Container container, T toFind)
{
	typename Container::iterator it;
	
	it = std::find(container.begin(), container.end(), toFind);
	if(it != container.end())
		return static_cast<int>(std::distance(container.begin(), it));
	else
		throw notFound();
}

	
#endif
