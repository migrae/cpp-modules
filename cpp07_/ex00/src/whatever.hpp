/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:04:00 by mgraefen          #+#    #+#             */
/*   Updated: 2023/07/11 15:37:53 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <string>

template <typename T>
void swap(T& x, T &y) {
  T temp = x;
  x = y;
  y = temp;
}

template <typename T>
T min(T x, T y) {
  if (x < y)
    return x;
  else
    return y;
}

template <typename T>
T max(T x, T y) {
  if (x > y)
    return x;
  else
    return y;
}


#endif
