/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 07:49:37 by mgraefen          #+#    #+#             */
/*   Updated: 2023/06/21 12:21:41 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed {
 public:
  Fixed(void);                         // Default Constructor
  Fixed(const Fixed& rhs);             // Copy Constructor
  Fixed& operator=(const Fixed& rhs);  // Assignment Operator
  Fixed(const int);
  Fixed(const float);
  ~Fixed(void);  // Decstructor

  int getRawBits(void) const;
  void setRawBits(int const raw);
  float toFloat(void) const;
  int toInt(void) const;

 private:
  int _f_point_nbr_value;
  static const int _fract_bit_nbr;
};

std::ostream& operator<<(std::ostream& os, const Fixed& i);

#endif