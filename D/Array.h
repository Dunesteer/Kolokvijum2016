#pragma once
#include "Memory.h"
class Array : public Memory
{
public:
	Array();
	Array(int n);
	~Array();
	int& operator[](int i);
};

