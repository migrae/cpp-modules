/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:29:21 by mgraefen          #+#    #+#             */
/*   Updated: 2023/07/11 15:57:43 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void print_int(int i) {
    std::cout << i << std::endl;
}

int main() {
    int array[] = {1, 2, 3, 4, 5};
    iter(array, 5, print_int);
    return 0;
}