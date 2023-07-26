/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:56:04 by mgraefen          #+#    #+#             */
/*   Updated: 2023/06/12 14:52:17 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie {
 public:
  Zombie(std::string name);
  ~Zombie(void);
  void announce(void);

 private:
  Zombie(void);

  std::string _name;
};

Zombie* newZombie(std::string);
void randomChump(std::string);
#endif