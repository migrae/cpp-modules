/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deque_container.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 16:34:18 by mgraefen          #+#    #+#             */
/*   Updated: 2023/07/26 14:47:43 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <ctime>
#include <deque>
#include <iostream>
#include <sstream>
#include <string>

typedef std::deque<std::pair<int, int> >::iterator DPairIterator;
typedef std::deque<std::pair<int, int> > Pair_deque;
typedef std::deque<int>::iterator D_num_Iterator;

class Deque_container {
 public:
  static void sort(int, char **);
  static void print_elapsed_time();
  static void print_final_numbers(void);

 private:
  Deque_container();
  ~Deque_container();
  Deque_container(const Deque_container &rhs);
  Deque_container &operator=(const Deque_container &rhs);
  static bool is_num(std::string);
  static void load_deque(void);
  static void swap_pairs(std::pair<int, int> &p);
  static void divide_pairs(Pair_deque &);
  static void merge_pairs(Pair_deque &, Pair_deque &, Pair_deque &);
  static void push_sorted_a_chain();
  static void binary_insert();
  static void create_jt_idx();
  static void jt_loop();
  static unsigned int binary_search(unsigned int, unsigned int, int);
  static std::deque<std::pair<int, int> > _pairs;
  static std::deque<int> _final_numbers;
  static std::deque<std::string> _str_loader;
  static std::deque<unsigned int> _jt_idx;
  static int struggler;
  static double elapsed_time;
  static void print_pairs(void);
  static void is_sorted(void);
};