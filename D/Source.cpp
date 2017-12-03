#include "Queue.h"
#include "Array.h"
#include <cstdlib>

void main()
{
	Array NA(10);
	Queue RA(10);

	for(int i=0;i<3;i++)
	{
		NA[i] = rand();
		RA.Push(rand());
	}

	Queue RB(20);

	for(int i=0;i<3;i++)
	{
		RB.Push(NA[i]);
		RB.Push(RA.Pop());
	}
}
