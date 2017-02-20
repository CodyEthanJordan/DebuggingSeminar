#include <stdio.h>
#include <stdarg.h>

char mostCommonChar(char firstChar, ...);

void main()
{
	char letter = mostCommonChar('a', 'b', 'c', 'd');
}