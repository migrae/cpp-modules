/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 07:49:23 by mgraefen          #+#    #+#             */
/*   Updated: 2023/06/21 10:54:38 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fract_bit_nbr = 8;

// Default Constructor
Fixed::Fixed(void) : _f_point_nbr_value(0) {
  std::cout << "Default constructor called" << std::endl;
}

// Copy Constructor
Fixed::Fixed(const Fixed& rhs) {
  std::cout << "Copy constructor called" << std::endl;
  *this = rhs;
}

// Default Destructor
Fixed::~Fixed(void) { std::cout << "Destructor called" << std::endl; }

// Assignment Constructor
Fixed& Fixed::operator=(const Fixed& rhs) {
  std::cout << "Copy assignment operator called" << std::endl;
  _f_point_nbr_value = rhs.getRawBits();
  return (*this);
}

// int to fixed point val
Fixed::Fixed(const int i_val) {
  std::cout << "Int constructor called" << std::endl;
  _f_point_nbr_value = i_val * (1 << _fract_bit_nbr);
}

// float to fixed point val
Fixed::Fixed(const float f_val) {
  std::cout << "Float constructor called" << std::endl;
  _f_point_nbr_value = roundf(f_val * (1 << _fract_bit_nbr));
}

int Fixed::getRawBits(void) const { return (_f_point_nbr_value); }

void Fixed::setRawBits(int const raw) {
  _f_point_nbr_value = raw;
  return;
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