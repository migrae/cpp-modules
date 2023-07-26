/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 13:13:03 by mgraefen          #+#    #+#             */
/*   Updated: 2023/06/21 11:07:22 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point) {
  Fixed x1 = b.get_x() - a.get_y();
  Fixed y1 = b.get_y() - a.get_y();
  Fixed x2 = c.get_x() - a.get_x();
  Fixed y2 = c.get_y() - a.get_y();
  Fixed x3 = point.get_x() - a.get_x();
  Fixed y3 = point.get_y() - a.get_y();

  Fixed d_f = (y2 * x1) - (x2 * y1);
  Fixed a_f = ((y2 * x3) - (x2 * y3)) / d_f;
  Fixed b_f = ((y3 * x1) - (x3 * y1)) / d_f;

  if ((a_f >= 0) && (b_f >= 0) && (a_f + b_f <= 1)) return (true);
  return (false);
}