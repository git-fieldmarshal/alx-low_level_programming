#include "main.h"
/**
 * cap_string - A function that capitalizes all words of a string
 * @m: pointer
 * Return: m
 */
char *cap_string(char *m)
{
	int p;
	
	p = 0;
	while (m[p] != '\0')
	{
		if (m[p] >= 'A' && m[p] <= 'Z')
		{
			m[p] = m[p] - 32;
		}
		p++;
	}
	return (m);
}
