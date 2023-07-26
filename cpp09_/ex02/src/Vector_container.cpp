/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector_container.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 16:51:29 by mgraefen          #+#    #+#             */
/*   Updated: 2023/07/26 14:47:27 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Vector_container.hpp"

std::vector<std::string> Vector_container::_str_loader;
std::vector<std::pair<int, int> > Vector_container::_pairs;
std::vector<int> Vector_container::_final_numbers;
std::vector<unsigned int> Vector_container::_jt_idx;
int Vector_container::struggler = -1;
double Vector_container::elapsed_time = 0;

// public

void Vector_container::sort(int argc, char **argv) {
  double start_time = std::clock();
  for (size_t i = 1; i < (size_t)argc; i++) {
    _str_loader.push_back(argv[i]);
  }
  load_vector();
  std::for_each(_pairs.begin(), _pairs.end(), swap_pairs);
  divide_pairs(_pairs);
  push_sorted_a_chain();
  create_jt_idx();
  jt_loop();
  double end_time = std::clock();
  elapsed_time = static_cast<double>(end_time - start_time) / CLOCKS_PER_SEC;
  // is_sorted();
}

void Vector_container::print_elapsed_time() {
  std::cout << "Time to process a range of " << _str_loader.size()
            << " elements with std::vector : " << elapsed_time * 1e6 << "us"
            << std::endl;
}

// private
void Vector_container::is_sorted() {
  for (size_t i = 0; i < _final_numbers.size() - 1; i++) {
    if (_final_numbers.at(i) > _final_numbers.at(i + 1)) {
      std::cout << "NOT SORTED: " << _final_numbers.at(i) << " "
                << _final_numbers.at(i + 1) << std::endl;
      return;
    }
  }
  std::cout << "SORTED" << std::endl;
}

bool Vector_container::is_num(std::string str) {
  if (str.find_first_not_of("0123456789") != std::string::npos) {
    std::cout << "Error: A non-number in sequence" << std::endl;
    return false;
  }
  return true;
}

void Vector_container::load_vector(void) {
  int first;
  int second;
  for (size_t i = 0; i < _str_loader.size(); i += 2) {
    if ((i + 1) < _str_loader.size() && is_num(_str_loader.at(i)) &&
        is_num(_str_loader.at(i + 1))) {
      std::istringstream(_str_loader[i]) >> first;
      std::istringstream(_str_loader[i + 1]) >> second;
      _pairs.push_back(std::make_pair(first, second));
    }
  }
  if (_str_loader.size() % 2) {
    std::istringstream(*(_str_loader.end() - 1)) >> struggler;
  }
}

void Vector_container::swap_pairs(std::pair<int, int> &p) {
  if (p.second > p.first) std::swap(p.first, p.second);
}

void Vector_container::print_pairs(void) {
  for (PairIterator it = _pairs.begin(); it != _pairs.end(); ++it)
    std::cout << "FIRST: " << it->first << " SECOND: " << it->second
              << std::endl;
}

void Vector_container::print_final_numbers(void) {
  std::cout << "BEFORE: ";
  for (size_t i = 0; i < _str_loader.size(); i++)
    std::cout << _str_loader.at(i) << " ";
  std::cout << std::endl;
  std::cout << "AFTER:  ";
  for (size_t i = 0; i < _final_numbers.size(); i++)
    std::cout << _final_numbers.at(i) << " ";
  std::cout << std::endl;
}

void Vector_container::divide_pairs(Pair_Vector &p) {
  std::size_t len = p.size();
  if (len <= 1) return;
  std::size_t middle = len / 2;
  Pair_Vector left;
  Pair_Vector right;
  for (std::size_t i = 0; i < len; i++) {
    if (i < middle)
      left.push_back(p[i]);
    else
      right.push_back(p[i]);
  }
  divide_pairs(left);
  divide_pairs(right);
  merge_pairs(left, right, p);
}

void Vector_container::merge_pairs(Pair_Vector &left, Pair_Vector &right,
                                   Pair_Vector &p) {
  std::size_t left_size = left.size();
  std::size_t right_size = right.size();
  std::size_t l = 0;
  std::size_t r = 0;

  p.clear();

  while (l < left_size && r < right_size) {
    if (left.at(l).first < right.at(r).first) {
      p.push_back(left.at(l));
      l++;
    } else {
      p.push_back(right.at(r));
      r++;
    }
  }
  while (l < left_size) {
    p.push_back(left.at(l));
    l++;
  }
  while (r < right_size) {
    p.push_back(right.at(r));
    r++;
  }
}

void Vector_container::push_sorted_a_chain() {
  for (size_t i = 0; i < _pairs.size(); i++) {
    if (_pairs[i].second != -1) _final_numbers.push_back(_pairs[i].first);
  }
}

void Vector_container::create_jt_idx() {
  unsigned int jt_nums[] = {0,   1,   3,   5,    11,   21,   43,   85,
                            171, 341, 683, 1365, 2731, 5461, 10923};
  unsigned int size = (unsigned int)_pairs.size() - 1;
  unsigned int old_idx = jt_nums[0];
  unsigned int new_idx = jt_nums[1];
  unsigned int i = 0;
  _jt_idx.push_back(0);
  while (i < 14) {
    unsigned int new_idx_tmp = new_idx;
    while (new_idx > old_idx) {
      if (new_idx > size) {
        new_idx--;
        continue;
      } else
        _jt_idx.push_back(new_idx);
      new_idx--;
    }
    old_idx = new_idx_tmp;
    new_idx = jt_nums[++i];
  }
}

void Vector_container::jt_loop() {
  if (_str_loader.size() == 1) {
    int num;
    std::istringstream(_str_loader[0]) >> num;
    _final_numbers.insert(_final_numbers.begin(), num);
    return;
  }
  if (_pairs[0].second == -1)
    struggler = _pairs[0].first;
  else
    _final_numbers.insert(_final_numbers.begin(), _pairs[0].second);
  unsigned int size = (unsigned int)_pairs.size();
  for (unsigned int i = 1; i < size; i++) {
    unsigned int jt_i = _jt_idx.at(i);
    unsigned int it = binary_search(0, i + jt_i, _pairs[jt_i].second);
    _final_numbers.insert(_final_numbers.begin() + it, _pairs[jt_i].second);
  }
  if (struggler != -1) {
    size = (unsigned int)_final_numbers.size();
    unsigned int it = binary_search(0, size, struggler);
    _final_numbers.insert(_final_numbers.begin() + it, struggler);
  }
}

unsigned int Vector_container::binary_search(unsigned int start,
                                             unsigned int end, int needle) {
  while (start < end) {
    unsigned int middle = (end - start) / 2 + start;
    if (needle == _final_numbers.at(middle))
      return middle;
    else if (needle < _final_numbers.at(middle))
      end = middle;
    else
      start = middle + 1;
  }
  return end;
}

///////////////////////////////////////////////////////
Vector_container::Vector_container() { return; }

Vector_container::~Vector_container() { return; }

Vector_container::Vector_container(const Vector_container &rhs) {
  (void)rhs;
  return;
}

Vector_container &Vector_container::operator=(const Vector_container &rhs) {
  (void)rhs;
  return *this;
  //////////////////////////////////////////////////////
}