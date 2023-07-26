/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 09:31:42 by mgraefen          #+#    #+#             */
/*   Updated: 2023/06/14 09:36:51 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main (void)
{
	Harl Harl_2;

	Harl_2.complain("debug");
	Harl_2.complain("info");
	Harl_2.complain("warning");
	Harl_2.complain("error");

	return(0);
}