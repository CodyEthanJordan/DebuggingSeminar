#include <stdio.h>

int main()
{
	char name[20] = "Cody";
	char otherName[20] = "Cody";

	if (name == otherName)
	{
		printf("I'm me");
	}
	else
	{
		printf("I'm not me");
	}

	return 0;

}