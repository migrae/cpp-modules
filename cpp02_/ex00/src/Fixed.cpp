/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 13:28:25 by mgraefen          #+#    #+#             */
/*   Updated: 2023/06/21 12:21:14 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_fract_bit_nbr = 8;

// Default Constructor
Fixed::Fixed(void) : _f_point_nbr_value(0) {
  std::cout << "Default constructor called" << std::endl;
}

// Copy Constructor
Fixed::Fixed(const Fixed &rhs) {
  std::cout << "Copy constructor called" << std::endl;
  *this = rhs;
}

// Default Destructor
Fixed::~Fixed(void) { std::cout << "Destructor called" << std::endl; }

// Assignment Constructor
Fixed &Fixed::operator=(const Fixed &rhs) {
  std::cout << "Copy assignment operator called" << std::endl;
  _f_point_nbr_value = rhs.getRawBits();
  return (*this);
}

int Fixed::getRawBits(void) const {
  std::cout << "getRawBits member function called" << std::endl;
  return (_f_point_nbr_value);
}
void Fixed::setRawBits(int const raw) {
  std::cout << "setRawBits member function called" << std::endl;
  _f_point_nbr_value = raw;
  return;
}