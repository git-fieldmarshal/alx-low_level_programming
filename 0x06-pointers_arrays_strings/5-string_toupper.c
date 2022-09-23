#include "main.h"
/**
 * string_toupper - a function that changes all lowercase letters of a string
 * @m: pointer
 * Return: m
 */
char *string_toupper(char *m);
{
	int p;

	p = 0;
	for (m[p] != '\0')
	{
		if (m[p] >= 'a' && m[p] <= 'z')
		{
			m[p] = m[p] - 32;
		}
		p++;
	}
	return (m);
}
