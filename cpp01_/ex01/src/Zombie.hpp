/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 10:56:04 by mgraefen          #+#    #+#             */
/*   Updated: 2023/06/13 10:44:31 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
#include <iostream>

class Zombie {
 public:
  Zombie(std::string name);
  Zombie(void);
  ~Zombie(void);
  void announce(void);
  void set_name(std::string);

 private:
  std::string _name;
};

Zombie* zombieHorde(int N, std::string name);
#endif