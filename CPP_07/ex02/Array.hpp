#pragma once

#include <iostream>

template<class T>class Array{
	private:
		T				*elements;
		unsigned int	_size;
	public:
		Array():elements(new T[0]()), _size(0){}
		Array(unsigned int n): elements(new T[n]()), _size(n){}
		~Array(){
			if (elements)
				delete [] elements;
		}
		Array(const Array& other) : elements(new T[other._size]())
			, _size(other._size){
			for (unsigned int i = 0; i < _size; i++) {
				elements[i] = other.elements[i];
			}
		}
		Array &operator=(Array const &array){
			if (this == &array)
				return *this;
			if (elements)
				delete [] elements;
			_size = array._size;
			elements = new T[_size]();
			for (unsigned int i = 0; i < _size; i++)
				elements[i] = array.elements[i];
			return *this;
		}
		unsigned int size() const{
			return this->_size;
		}
		T	&operator[](long index) {
			if (index < 0 || _size <= index)
				throw std::out_of_range("Index Out Of Bounds");	
			return elements[index];
		}
};