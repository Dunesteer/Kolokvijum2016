#include "Queue.h"

Queue::Queue():Memory()
{
	brUpisanih = 0;
}

Queue::Queue(int n):Memory(n)
{
	brUpisanih = 0;
}


Queue::~Queue()
{
}

void Queue::Push(int x)
{
	if(niz!=nullptr&&PripadaNizu(brUpisanih))
		niz[brUpisanih++] = x;
}

int Queue::Pop()
{
	int pom = niz[0];

	for(int i=0;i<brUpisanih-1;i++)
	{
		niz[i] = niz[i + 1];
	}

	return pom;
}
