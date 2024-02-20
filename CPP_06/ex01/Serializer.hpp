#pragma once

#include "iostream"
#include <stdint.h>

struct Data{
	int	a;
};

class Serializer{
	public:
		Serializer();
		Serializer(Serializer const &copy);
		Serializer &operator=(Serializer const &serialize);
		~Serializer();
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};
