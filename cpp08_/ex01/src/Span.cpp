/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 08:35:40 by mgraefen          #+#    #+#             */
/*   Updated: 2023/07/13 14:08:28 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _max_size(0), _numbers(new std::vector<int>()) { return; }

Span::Span(unsigned int N) : _max_size(N), _numbers(new std::vector<int>()) {
  return;
}

Span::Span(const Span &rhs)
    : _max_size(rhs._max_size),
      _numbers(new std::vector<int>(*(rhs._numbers))) {
  return;
}

Span &Span::operator=(const Span &rhs) {
  if (this != &rhs) {
    delete _numbers;
    _max_size = rhs._max_size;
    _numbers = new std::vector<int>(*(rhs._numbers));
  }
  return *this;
}

Span::~Span() { delete _numbers; }

void Span::addNumber(const int number) {
  try {
    if (_numbers->size() < _max_size) {
      _numbers->push_back(number);
      // std::cout << "added: " << number << std::endl;
    } else
      throw overSize();
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
}

int Span::shortestSpan(void) {
  if (_numbers->size() == 1) {
    std::cout << "The shortest span is 0, because there is only one number "
                 "value present: "
              << *_numbers->begin() << std::endl;
    return 1;
  } else if (_numbers->size() > 0) {
    std::sort(_numbers->begin(), _numbers->end());
    std::vector<int> spans(_numbers->size());
    std::adjacent_difference(_numbers->begin(), _numbers->end(), spans.begin());
    unsigned int shortest = *std::min_element(spans.begin() + 1, spans.end());
    std::cout << "The shortest span is: " << shortest << std::endl;
  } else {
    std::cout << "No numbers in container. Add some numbers first."
              << std::endl;
    return 1;
  }
  return 0;
}

int Span::longestSpan(void) {
  if (_numbers->size() != 0) {
    unsigned int lowest = *std::min_element(_numbers->begin(), _numbers->end());
    unsigned int highest =
        *std::max_element(_numbers->begin(), _numbers->end());
    if (lowest == highest) {
      std::cout << "The longest span is 0, because there is only one number "
                   "value present: "
                << lowest << std::endl;
      return 1;
    }
    std::cout << "The longest Span is: " << highest - lowest << ". From "
              << lowest << " to " << highest << std::endl;
    return 0;
  } else {
    std::cout << "No numbers in container. Add some numbers first."
              << std::endl;
    return 1;
  }
}

void Span::add_a_bunch_of_numbers(const unsigned int n, unsigned int max_num) {
  //std::srand(static_cast<unsigned int>(std::time(NULL)));
  for (unsigned int i = 0; i < n; i++) {
    addNumber(::rand() % max_num);
  }
}

const char *Span::overSize::what() const throw() {
  return ("Max numbers reached - _numbers is full");
}

const char *Span::empty::what() const throw() {
  return ("No numbers in container. Add some numbers first.");
}
