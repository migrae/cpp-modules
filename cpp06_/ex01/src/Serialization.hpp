/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 08:38:51 by mgraefen          #+#    #+#             */
/*   Updated: 2023/07/11 14:12:58 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP

#include <iostream>
#include <string>
#include <stdint.h>

#include "Data.hpp"

class Serializer {
 public:
  static uintptr_t serialize(Data *ptr);
  static Data *deserialize(uintptr_t raw);

 private:
  Serializer();
  ~Serializer();
  Serializer(const Serializer &rhs);
  Serializer &operator=(const Serializer &rhs);
};

#endif