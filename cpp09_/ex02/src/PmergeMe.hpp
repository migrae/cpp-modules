/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 08:23:39 by mgraefen          #+#    #+#             */
/*   Updated: 2023/07/26 14:47:45 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <ctime>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

#include "Deque_container.hpp"
#include "Vector_container.hpp"

class PmergeMe {
 public:
  static bool sort(int, char **);

 private:
  static bool check_input(char **argv);
  static bool is_num(std::string str);
  PmergeMe();
  ~PmergeMe();
  PmergeMe(const PmergeMe &rhs);
  PmergeMe &operator=(const PmergeMe &rhs);
};
