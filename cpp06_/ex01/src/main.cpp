/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 08:58:20 by mgraefen          #+#    #+#             */
/*   Updated: 2023/07/11 10:15:56 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"
#include "Data.hpp"

int main(void){
	Data *ImportantStuff = new Data;
	ImportantStuff->nuclear_codes = "1234Password";
	uintptr_t temp;
	
	std::cout << "Data Pointer Adress: " << ImportantStuff << std::endl;
	std::cout << "Serialization:" << std::endl;
	temp = Serializer::serialize(ImportantStuff);
	ImportantStuff = NULL;
	std::cout << "uintptr_t Pointer Adress: " << temp << std::endl;
	std::cout << "Deserialization:" << std::endl;
	ImportantStuff = Serializer::deserialize(temp);
	std::cout << "new_Data Pointer Adress: " << ImportantStuff << std::endl;
	std::cout << "Data Content: " << ImportantStuff->nuclear_codes << std::endl;

	delete ImportantStuff;
	return 0;
}