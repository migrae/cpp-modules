/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 07:49:37 by mgraefen          #+#    #+#             */
/*   Updated: 2023/06/15 11:29:18 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed {
 public:
  Fixed(void);                         // Default Constructor
  Fixed(const Fixed &rhs);             // Copy Constructor
  Fixed &operator=(const Fixed &rhs);  // Assignment Operator
  Fixed operator+(const Fixed &rhs);
  Fixed operator-(const Fixed &rhs);
  Fixed operator*(const Fixed &rhs);
  Fixed operator/(const Fixed &rhs);
  Fixed &operator++();
  Fixed &operator--();
  Fixed operator++(int dummy);
  Fixed operator--(int dummy);
  bool operator>(const Fixed &rhs);
  bool operator<(const Fixed &rhs);
  bool operator>=(const Fixed &rhs);
  bool operator<=(const Fixed &rhs);
  bool operator==(const Fixed &rhs);
  bool operator!=(const Fixed &rhs);
  Fixed(const int);    // int to f_point
  Fixed(const float);  // float to f_point
  ~Fixed(void);        // Decstructor

  static const Fixed &min(const Fixed &a, const Fixed &b);
  static const Fixed &max(const Fixed &a, const Fixed &b);
  static Fixed &min(Fixed &a, Fixed &b);
  static Fixed &max(Fixed &a, Fixed &b);
  int getRawBits(void) const;
  void setRawBits(int const raw);
  float toFloat(void) const;
  int toInt(void) const;

 private:
  int _f_point_nbr_value;
  static const int _fract_bit_nbr;
};

std::ostream &operator<<(std::ostream &os, const Fixed &i);

#endif