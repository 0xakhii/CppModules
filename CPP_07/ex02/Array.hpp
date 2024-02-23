#pragma once

#include <iostream>

template<class T>class Array{
	private:
		T				*elements;
		unsigned int	_size;
	public:
		Array():elements(new T[0]), _size(0){}
		Array(unsigned int n): elements(new T[n]), _size(n){}
		Array(Array const &copy): elements(copy.elements), _size(copy._size){}
		~Array(){
			if (elements)
				delete [] elements;
		}
		Array &operator=(Array const &array){
			if (this == &array)
				return *this;
			if (elements)
				delete [] elements;
			_size = array._size;
			array.elements = new T[_size];
			for (unsigned int i = 0; i <= _size; i++)
				elements[i] = array.elements[i];
			return *this;
		}
		unsigned int size() const{
			return this->_size;
		}
		class IndexOutOfBounds : std::exception{
			const char * what() const throw(){
				return ("Index out of bounds");
			}
		};
		T& operator[](long index){
			if (index < 0 || _size <= index)
				throw IndexOutOfBounds();
			return elements[index];
		}
};