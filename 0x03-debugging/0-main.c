#include <stdlib.h>
#include <time.h>
#include "main.h"

/**
 * main - checks whether the number is positive or negative
 *
 * Return: Always 0
 */

int main(void)
{
	int i;

	srand(time(0));
	i = ran() - RAND_MAX / 2;

	if (i > 0)
	{
		printf("%d is positive \n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative \n", i);
	}
	else
	{
		printf("%d is zero \n", i);
	}

	return (0);
}
