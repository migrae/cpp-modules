/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 13:26:21 by mgraefen          #+#    #+#             */
/*   Updated: 2023/06/21 11:07:53 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main(void) {
  Point a(1, 3);
  Point b(3, 1);
  Point c(2, 4);
  Point p(5, 5);

  if (bsp(a, b, c, p) == true)
    std::cout << "inside" << std::endl;
  else
    std::cout << "outside" << std::endl;
  return (0);
}