#include "main.h"
/**
 * print_chessboard - Entry point
 * @a: array
 * @Return: Always 0
 */
void print_chessboard(char (*a)[8])
{
	int m;
	int n;

	for (m = 0; m < 8; m++)
	{
		for (n = 0; n < 8; n++)
		{
			putchar(a[m][n]);
		}
		putchar('\n');
	}
}
