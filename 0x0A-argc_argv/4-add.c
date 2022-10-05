#include <stdio.h>
#include "main.h"
/**
 * main - a program that adds positive numbers
 *
 * Return: Always 0.
 */
int main(int argc, char *rgv[])
{
	int sum, num, m, n, o;

	sum = 0;

	for (m = 1; m < argc; m++)
	{
		for (n = 0; argv[m][n] != '\0'; n++)
		{
			if (argv[m][n] > '9' || argv[m][n] < '0')
			{
				puts("Error");
				return (1);
			}
		}
	}

	for (o = 1; o < argc; o++)
	{
		num = _atoi(argv[o]);
		if (num >= 0)
		{
			sum += num;
		}
	}

	printf("%d\n", sum);
	return (0);
}
