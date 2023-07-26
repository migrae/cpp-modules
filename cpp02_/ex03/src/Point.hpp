/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 12:38:06 by mgraefen          #+#    #+#             */
/*   Updated: 2023/06/15 14:45:11 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP
#include "Fixed.hpp"

class Point {
 public:
  Point(void);
  ~Point(void);
  Point(const Point &rhs);
  const Point &operator=(const Point &rhs);
  Point(const float x, const float y);
  Fixed get_x(void) const;
  Fixed get_y(void) const;
  float get_x_float(void) const;
  float get_y_float(void) const;

 private:
  const Fixed _x;
  const Fixed _y;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif