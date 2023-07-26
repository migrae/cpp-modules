/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 12:56:49 by mgraefen          #+#    #+#             */
/*   Updated: 2023/07/11 14:15:55 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "Base.hpp"
#include "C.hpp"

void identify(Base *p) {
  Base *t1, *t2, *t3;
  t1 = dynamic_cast<A *>(p);
  if (t1 != NULL) std::cout << "A" << std::endl;
  t2 = dynamic_cast<B *>(p);
  if (t2 != NULL) std::cout << "B" << std::endl;
  t3 = dynamic_cast<C *>(p);
  if (t3 != NULL) std::cout << "C" << std::endl;
}

void identify(Base &p) {
  try {
    (void)dynamic_cast<A &>(p);
    std::cout << "A" << std::endl;
  } catch (std::exception &) {
  }

  try {
    (void)dynamic_cast<B &>(p);
    std::cout << "B" << std::endl;
  } catch (std::exception &) {
  }

  try {
    (void)dynamic_cast<C &>(p);
    std::cout << "C" << std::endl;
  } catch (std::exception &) {
  }
}

int random3() {
  std::srand(static_cast<unsigned int>(std::time(NULL)));
  return std::rand() % 3;
}

Base *generate(void) {
  Base *ret;
  int c_type = random3();

  switch (c_type) {
    case 0:
      return (ret = new A, ret);
      break;
    case 1:
      return (ret = new B, ret);
      break;
    case 2:
      return (ret = new C, ret);
      break;
    default:
      return (NULL);
  }
}

int main(void) {
  Base *p = generate();
  Base &p_reference = *p;
  identify(p);
  identify(p_reference);

  return 0;
}