/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 15:29:18 by mgraefen          #+#    #+#             */
/*   Updated: 2023/07/11 15:48:07 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <functional>
#include <iostream>
#include <string>

template <typename T, typename Func>
void iter(T* pointer, size_t len, Func func) {
	for(size_t i = 0; i < len; ++i)
		func(pointer[i]);
}