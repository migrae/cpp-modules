/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:00:00 by mgraefen          #+#    #+#             */
/*   Updated: 2023/07/12 10:52:08 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>


template <class T>
class Array {
	public:
	Array();
	Array(unsigned int n);
	Array(const Array &rhs);
	Array &operator=(const Array &rhs);
	T& operator[](size_t index);
	~Array();

	size_t size(void);

	class IndexOutOfBounds : public std::exception{
		public:
		virtual const char* what() const throw();
	};
	
	private:
	T *_Array;
	size_t _size;
};

template <class T>
Array<T>::Array() : _size(0), _Array(new T[0]){
  return;
}

template <class T>
Array<T>::Array(unsigned int n) : _Array(new T[n]),  _size(n) {
  return;
}

template <class T>
Array<T>::Array(const Array &rhs) : _Array(new T[rhs._size]), _size(rhs._size) {
  for(size_t i = 0; i < _size; ++i )
		_Array[i] = rhs._Array[i];
  return;
}

template <class T>
Array<T> &Array<T>::operator=(const Array &rhs) {
  if (this != &rhs) {
    delete _Array;
    _size = rhs._size;
  }
  if (_size > 0) {
    _Array = new T[rhs._size];
    for (size_t i = 0; i < rhs._size; ++i) _Array[i] = rhs._Array[i];
  } else
    _Array = NULL;
  return *this;
}

template <class T>
T& Array<T>::operator[](size_t index){
	if(index > _size)
		throw Array::IndexOutOfBounds();
	else
		return _Array[index];
}

template <class T>
const char *Array<T>::IndexOutOfBounds::what() const throw() {
  return ("The index you try to access is out of bounds");
}

template <class T>
Array<T>::~Array() {
  delete[] _Array;
  return;
}

template <class T>
size_t Array<T>::size(void) {
  return _size;
}