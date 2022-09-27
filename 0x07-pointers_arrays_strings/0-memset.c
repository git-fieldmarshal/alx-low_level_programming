#include "main.h"
/**
 * _memset -  a function that fills memory with a constant byte
 * @s: Starting address for the memory to be filled
 * @b: The desired value
 * @n: number of bytes to be changed
 *
 * Return: changed array with new value for n
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
