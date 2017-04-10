#include <stdio.h>

int sumOfSquares(int* list, int listLength);

int main()
{
	// make two lists
	int listA[4] = { 0,1,2,3 }; // the numbers 0 through 3
	int listB[4] = { -1,0,1,2 }; // the numbers -1 through 2

	// find out the sum of the squares of their elements
	int totalA = sumOfSquares(listA, 4);
	int totalB = sumOfSquares(listB, 4);

	// compare
	if (totalA = totalB)
	{
		printf("They are the same size");
	}
	else if (totalA > totalB)
	{
		printf("A is bigger");
	}
	else if (totalB > totalA)
	{
		printf("B is bigger");
	}

	// last element of listA is 3
	printf("The last element of list A is %i", listA[3]);

	return 0;
}

int sumOfSquares(int* list, int listLength)
{
	// squares all the numbers in a list, then adds them up all, and returns the total
	int c = 0;

	// squares the numbers
	for (c; c < listLength; c++)
	{
		list[c] = list[c] * list[c];
	}

	int total = 0;
	// adds them up
	for (c = 0; c < listLength; c++)
	{
		total += list[c];
	}

	return total;
}