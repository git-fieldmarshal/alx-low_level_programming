#include "main.h"
/**
 * leet - a function that encodes a string into 1337
 * @m: input value
 * Return: m
 */

char *leet(char *m)
{
	int n, p;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (n = 0; m[n] != '\0'; n++)
	{
		for (p = 0; p < 10; p++)
		{
			if (m[n] == s1[p])
			{
				m[n] = s2[p];
			}
		}
	}
	return (m);
}
