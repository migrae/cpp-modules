/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 14:53:07 by mgraefen          #+#    #+#             */
/*   Updated: 2023/07/07 11:50:56 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void) {
	DiamondTrap Frank("Frank");
	Frank.attack("a toast");
	Frank.whoAmI();
	Frank.highFivesGuys();
	Frank.gatekeeper_mode();
  return 0;
}