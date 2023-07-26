/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 12:43:30 by mgraefen          #+#    #+#             */
/*   Updated: 2023/06/15 14:37:12 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0) { return; }

Point::~Point(void) { return; }

Point::Point(const Point &rhs) : _x(rhs._x), _y(rhs._y) { return; }

const Point &Point::operator=(const Point &rhs) { return rhs; }

Point::Point(const float x_f, const float y_f) : _x(x_f), _y(y_f) { return; }

Fixed Point::get_x(void) const { return (_x); }

Fixed Point::get_y(void) const { return (_y); }

float Point::get_x_float(void) const { return (_x.toFloat()); }

float Point::get_y_float(void) const { return (_y.toFloat()); }