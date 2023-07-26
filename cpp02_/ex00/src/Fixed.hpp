/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 13:28:28 by mgraefen          #+#    #+#             */
/*   Updated: 2023/06/14 14:48:16 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed {
 public:
  Fixed(void);                       // Default Constructor
  Fixed(const Fixed &a);             // Copy Constructor
  ~Fixed(void);                      // Deconstructor
  Fixed &operator=(const Fixed &a);  // Assignment Operator
  int getRawBits(void) const;
  void setRawBits(int const raw);

 private:
  int _f_point_nbr_value;
  static const int _fract_bit_nbr;
};
#endif