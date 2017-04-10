#include <stdio.h>

void main()
{
	char otherString[] = "This is fine";
	otherString[0] = 't';

	char* string = "Hello World";
	string[0] = 'h';

	printf(string);
	printf(otherString);
}
