/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 10:49:39 by mgraefen          #+#    #+#             */
/*   Updated: 2023/07/17 12:58:46 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <deque>
#include <stack>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container> {
 public:
  MutantStack() : std::stack<T, Container>(){};
  ~MutantStack(){};
  MutantStack(const MutantStack &rhs) : std::stack<T>(rhs){};
  MutantStack &operator=(const MutantStack &rhs) {
    if (&rhs != this) this = rhs;
    return *this;
  }
  typedef typename std::deque<T>::iterator iterator;
  iterator begin() { return this->c.begin(); }
  iterator end() { return this->c.end(); }
};

#endif  // MUTANTSTACK_HPP