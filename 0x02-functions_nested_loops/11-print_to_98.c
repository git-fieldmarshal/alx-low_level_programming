#include "main.h"

/**
 * print_to_98 - print n to 98 counts
 *
 * @n: input
 */

void print_to_98(int n)
{
	int hesabu;

	if (n > 98)
	{
		for (hesabu = n; hesabu > 98; --hesabu)
		{
			printf("%d, ", hesabu);
		}
	}
	else
	{
		for (hesabu = n; hesabu < 98; ++hesabu)
		{
			printf("%d, ", hesabu);
		}
	}
	printf("98\n");
}
