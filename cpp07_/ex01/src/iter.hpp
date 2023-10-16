/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:29:18 by mgraefen          #+#    #+#             */
/*   Updated: 2023/10/16 09:08:16 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <functional>
#include <iostream>
#include <string>

template <typename T, typename Func>
void iter(T* pointer, size_t len, Func func) {
  if (pointer && func) {
    for (size_t i = 0; i < len; ++i) func(pointer[i]);
  }
}

#endif