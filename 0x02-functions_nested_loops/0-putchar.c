#include "main.h"
#include <string.h>
/**
 * main - entry point
 *
 * Description: prints _putchar using putchar prototype
 *
 * Return: Always 0
 */

int main(void)
{
	char str[] = "_putchar";
	int ch;

	for (ch = 0; ch < 8; ++ch)
	{
		_putchar(str[]);
	}
	_putchar('\n');

	return (0);
}
