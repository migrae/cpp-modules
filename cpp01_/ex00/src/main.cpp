/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 14:10:14 by mgraefen          #+#    #+#             */
/*   Updated: 2023/06/13 10:44:39 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
  randomChump("Hubert");
  Zombie *newOne = newZombie("Gustavo");
  newOne->announce();
  delete (newOne);
  return (0);
}