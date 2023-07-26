/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 10:20:05 by mgraefen          #+#    #+#             */
/*   Updated: 2023/06/14 10:21:53 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>
#include <cctype>

class Harl{

private:
void debug(void);
void info(void);
void warning(void);
void error(void);

public:
void complain (std::string level);
Harl(void);
~Harl(void);

};


#endif