#include "main.h"
/**
 * _strcmp - a function that compares two strings
 * @s1: inputut value
 * @s2: input value
 *
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int m;

	m = 0;
	while (s1[m] != '\0' && s2[m] != '\0')
	{
		if (s1[m] != s2[m])
		{
			return (s1[m] - s2[m]);
		}
	m++;
	}
	retun (0);
}
