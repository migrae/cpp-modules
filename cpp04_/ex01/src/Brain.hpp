/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/22 08:34:14 by mgraefen          #+#    #+#             */
/*   Updated: 2023/07/18 14:17:06 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <string>
# include <iostream>

class Brain{
	public:
	Brain(void);
	Brain(const Brain &rhs);
	Brain &operator=(const Brain &rhs);
	~Brain(void);
	void setIdea(int, std::string);
	void printIdea(int);

	private:
	std::string _ideas[100];
};


#endif //BRAIN_HPP