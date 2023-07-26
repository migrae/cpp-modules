/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 07:49:23 by mgraefen          #+#    #+#             */
/*   Updated: 2023/06/21 12:21:57 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fract_bit_nbr = 8;

// Default Constructor
Fixed::Fixed(void) : _f_point_nbr_value(0) { return; }

// Copy Constructor
Fixed::Fixed(const Fixed& rhs) { *this = rhs; }

// Default Destructor
Fixed::~Fixed(void) { return; }

// Assignment Constructor
Fixed& Fixed::operator=(const Fixed& rhs) {
  _f_point_nbr_value = rhs.getRawBits();
  return (*this);
}

Fixed Fixed::operator+(const Fixed& rhs) {
  return (this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(const Fixed& rhs) {
  return (this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(const Fixed& rhs) {
  return (this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(const Fixed& rhs) {
  return (this->toFloat() / rhs.toFloat());
}

bool Fixed::operator>(const Fixed& rhs) {
  if (_f_point_nbr_value > rhs._f_point_nbr_value)
    return (true);
  else
    return (false);
}

bool Fixed::operator<(const Fixed& rhs) {
  if (_f_point_nbr_value < rhs._f_point_nbr_value)
    return (true);
  else
    return (false);
}

bool Fixed::operator>=(const Fixed& rhs) {
  if (_f_point_nbr_value >= rhs._f_point_nbr_value)
    return (true);
  else
    return (false);
}

bool Fixed::operator<=(const Fixed& rhs) {
  if (_f_point_nbr_value <= rhs._f_point_nbr_value)
    return (true);
  else
    return (false);
}

bool Fixed::operator==(const Fixed& rhs) {
  if (_f_point_nbr_value == rhs._f_point_nbr_value)
    return (true);
  else
    return (false);
}

bool Fixed::operator!=(const Fixed& rhs) {
  if (_f_point_nbr_value != rhs._f_point_nbr_value)
    return (true);
  else
    return (false);
}

Fixed& Fixed::operator++() {
  _f_point_nbr_value++;
  return (*this);
}

Fixed Fixed::operator++(int dummy) {
  Fixed out(*this);
  (void)dummy;
  _f_point_nbr_value++;
  return (out);
}

Fixed& Fixed::operator--() {
  _f_point_nbr_value--;
  return (*this);
}

Fixed Fixed::operator--(int dummy) {
  Fixed out(*this);
  (void)dummy;
  _f_point_nbr_value--;
  return (out);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
  if (a._f_point_nbr_value < b._f_point_nbr_value)
    return (a);
  else
    return (b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
  if (a._f_point_nbr_value > b._f_point_nbr_value)
    return (a);
  else
    return (b);
}

Fixed& Fixed::min(Fixed& a, Fixed& b) {
  if (a._f_point_nbr_value < b._f_point_nbr_value)
    return (a);
  else
    return (b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
  if (a._f_point_nbr_value > b._f_point_nbr_value)
    return (a);
  else
    return (b);
}

int Fixed::getRawBits(void) const { return (_f_point_nbr_value); }

void Fixed::setRawBits(int const raw) {
  _f_point_nbr_value = raw;
  return;
}

// int to fixed point val
Fixed::Fixed(const int i_val) {
  _f_point_nbr_value = i_val * (1 << _fract_bit_nbr);
}

// float to fixed point val
Fixed::Fixed(const float f_val) {
  _f_point_nbr_value = roundf(f_val * (1 << _fract_bit_nbr));
}
int Fixed::toInt(void) const {
  int i_val;
  i_val = _f_point_nbr_value >> _fract_bit_nbr;
  return (i_val);
}

float Fixed::toFloat(void) const {
  float f_val;
  f_val = (float)_f_point_nbr_value / (1 << _fract_bit_nbr);
  return (f_val);
}

std::ostream& operator<<(std::ostream& os, const Fixed& rhs) {
  os << rhs.toFloat();
  return (os);
}