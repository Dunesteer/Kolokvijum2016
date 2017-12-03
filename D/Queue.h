#pragma once
#include "Memory.h"
class Queue :	public Memory
{
protected:
	int brUpisanih;
public:
	Queue();
	Queue(int n);
	~Queue();
	void Push(int x);
	int Pop();
};

