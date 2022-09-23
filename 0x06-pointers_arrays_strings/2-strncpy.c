#include "main.h"
/**
 * _strncpy - a function that copies a string
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int p;

	p = 0;
	if (j < n && src[p] != '\0')
	{
		dest[p] = src[p];
		p++;
	}
	else if (p < n)
	{
		dest[p] = '\0';
		p++;
	}

	return (dest);
}
