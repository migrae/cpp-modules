/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 09:44:44 by mgraefen          #+#    #+#             */
/*   Updated: 2023/10/23 09:14:40 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void){

	std::srand(static_cast<unsigned int>(std::time(NULL)));
	
	Span Test(5);
	Test.add_a_bunch_of_numbers(5, 100000000);
	Test.longestSpan();
	Test.shortestSpan();
	std::cout << std::endl;
	
	Span Test_large(10000);
	Test_large.add_a_bunch_of_numbers(10000, 10000);
	Test_large.longestSpan();
	Test_large.shortestSpan();
	std::cout << std::endl;
	
	Span Test_superlarge(100000);
	Test_superlarge.add_a_bunch_of_numbers(100000, 10000000);
	Test_superlarge.longestSpan();
	Test_superlarge.shortestSpan();
	std::cout << std::endl;

	Span Test2(0);
	Test2.longestSpan();
	Test2.shortestSpan();
	std::cout << std::endl;
	
	Span Test3(1);
	Test3.addNumber(1);
	Test3.longestSpan();
	Test3.shortestSpan();
	std::cout << std::endl;
	
	Span Test4(2);
	Test4.add_a_bunch_of_numbers(2, 100);
	Test4.longestSpan();
	Test4.shortestSpan();
	std::cout << std::endl;

	Span Test5(10);
	Test5.add_a_bunch_of_numbers(11, 10);

	Span Test6(10);
	Test6.longestSpan();
	Test6.shortestSpan();
	
	return 0;
}