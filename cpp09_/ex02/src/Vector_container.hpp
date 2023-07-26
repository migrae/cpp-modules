/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector_container.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 16:51:11 by mgraefen          #+#    #+#             */
/*   Updated: 2023/07/26 14:47:39 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>
#include <ctime>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

typedef std::vector<std::pair<int, int> >::iterator PairIterator;
typedef std::vector<std::pair<int, int> > Pair_Vector;
typedef std::vector<int>::iterator V_num_Iterator;

class Vector_container {
 public:
  static void sort(int, char **);
  static void print_elapsed_time();
  static void print_final_numbers(void);

 private:
  Vector_container();
  ~Vector_container();
  Vector_container(const Vector_container &rhs);
  Vector_container &operator=(const Vector_container &rhs);
  static bool is_num(std::string);
  static void load_vector(void);
  static void swap_pairs(std::pair<int, int> &p);
  static void divide_pairs(Pair_Vector &);
  static void merge_pairs(Pair_Vector &, Pair_Vector &, Pair_Vector &);
  static void push_sorted_a_chain();
  static void binary_insert();
  static void create_jt_idx();
  static void jt_loop();
  static unsigned int binary_search(unsigned int, unsigned int, int);
  static std::vector<std::pair<int, int> > _pairs;
  static std::vector<int> _final_numbers;
  static std::vector<std::string> _str_loader;
  static std::vector<unsigned int> _jt_idx;
  static int struggler;
  static double elapsed_time;
  static void print_pairs(void);
  static void is_sorted(void);
};
