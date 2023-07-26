/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 11:15:06 by mgraefen          #+#    #+#             */
/*   Updated: 2023/07/17 12:33:30 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>

#include "MutantStack.hpp"

int main() {
  MutantStack<int> mstack;
  mstack.push(5);
  mstack.push(17);
  std::cout << mstack.top() << std::endl;
  mstack.pop();
  std::cout << mstack.size() << std::endl;
  mstack.push(3);
  mstack.push(5);
  mstack.push(737);
  //[...]
  mstack.push(0);
  MutantStack<int>::iterator it = mstack.begin();
  MutantStack<int>::iterator ite = mstack.end();
  ++it;
  --it;
  while (it != ite) {
    std::cout << *it << std::endl;
    ++it;
  }
  std::stack<int> s(mstack);

  std::cout << std::endl;
  std::cout << "LIST:" << std::endl;
  std::cout << std::endl;

  std::list<int> a_list;
  a_list.push_back(5);
  a_list.push_back(17);
  std::cout << a_list.back() << std::endl;
  a_list.pop_back();
  std::cout << a_list.size() << std::endl;
  a_list.push_back(3);
  a_list.push_back(5);
  a_list.push_back(737);
  //[...]
  a_list.push_back(0);
  std::list<int>::iterator it_l = a_list.begin();
  std::list<int>::iterator ite_l = a_list.end();
  ++it_l;
  --it_l;
  while (it_l != ite_l) {
    std::cout << *it_l << std::endl;
    ++it_l;
  }
  std::list<int> s_l(a_list);

  return 0;
}