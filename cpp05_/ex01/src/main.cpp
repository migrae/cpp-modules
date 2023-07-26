/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/03 15:24:25 by mgraefen          #+#    #+#             */
/*   Updated: 2023/07/06 12:52:54 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void) {
  Bureaucrat KarlHeinz("Karl Heinz", 23);
  try {
    Form CoffeeBreak_false_low("Coffee Break", 151, 22);
  } catch (std::exception &e) {
    std::cout << "Could not construct because: " << e.what() << std::endl;
  }

  try {
    Form CoffeeBreak_false_high("Coffee Break", 0, 22);
  } catch (std::exception &e) {
    std::cout << "Could not construct because: " << e.what() << std::endl;
  }

  Form CoffeeBreak("Coffee Break", 22, 22);

  KarlHeinz.signForm(CoffeeBreak);
  KarlHeinz.increment(1);
  KarlHeinz.signForm(CoffeeBreak);
  KarlHeinz.signForm(CoffeeBreak);

  return (0);
}