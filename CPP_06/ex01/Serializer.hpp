#pragma once

#include "iostream"
#include <stdint.h>

struct Data{
	int	a;
};

class Serializer{
	private:
		Serializer();
		Serializer(Serializer const &copy);
		Serializer &operator=(Serializer const &serialize);
		~Serializer();
	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};
