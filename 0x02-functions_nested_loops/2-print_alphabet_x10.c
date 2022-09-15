#include "main.h"
/**
 * print_alphabet_x10 - function will print the alphabet 10 times
 *
 */

void print_alphabet_x10(void)
{
	int mstari, herufi;

	for (mstari = 0; mstari <= 9; ++mstari)
	{
		for (herufi = 'a'; herufi <= 'z'; ++herufi)
		{
			_putchar(herufi);
		}
		_putchar('\n');
	}
}
