/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 08:26:09 by mgraefen          #+#    #+#             */
/*   Updated: 2023/07/13 13:29:04 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric>

class Span {
 public:
  Span();
  Span(unsigned int N);
  Span(const Span &rhs);
  Span &operator=(const Span &rhs);
  ~Span();

  void addNumber(const int);
  int shortestSpan(void);
  int longestSpan(void);
  void add_a_bunch_of_numbers(const unsigned int n, unsigned int max_num);

	//Exceptions
  class overSize : public std::exception {
   public:
    virtual const char *what() const throw();
  };
	
  class empty : public std::exception {
   public:
    virtual const char *what() const throw();
  };

 private:
  unsigned int _max_size;
  std::vector<int> *_numbers;
};

#endif