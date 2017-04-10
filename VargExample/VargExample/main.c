#include <stdio.h>
#include <stdarg.h>

char mostCommonChar(char firstChar, ...);

void main()
{
	char letter = mostCommonChar('a', 'b', 'c', 'd', 'b', 'a');

	printf("Most common letter is: %c\n", letter);
}

char mostCommonChar(char firstChar, ...)
{
	va_list args;

	va_start(args, firstChar);

	int frequency[26] = { 0 };

	char x = va_arg(args, int);

	// continue until we hit the null terminator
	while (x != '\0')
	{
		int letterIndex = x - 'a';
		frequency[letterIndex]++;
		x = va_arg(args, int);
	}

	char mostCommon;
	int biggestCount = 0;
	for (int i = 0; i < 26; i++)
	{
		if (frequency[i] > biggestCount)
		{
			biggestCount = frequency[i];
			mostCommon = i + 'a';
		}
	}

	return mostCommon;
}