#include <stdio.h>
#include "main.h"
/**
 * _atoi - program that multiplies two numbers
 * @s: string to be converted
 * Return: Always 0.
 */

int _atoi(char *s)
{
	int m, n, o, len, p, digit;

	m = 0;
	n = 0;
	o = 0;
	len = 0;
	p = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (m < len && p == 0)
	{
		if (s[m] == '-')
			++n;

		if (s[m] >= '0' && s[m] <= '9')
		{
			digit = s[m] - '0';
			if (d % 2)
				digit = -digit;
			o = o * 10 + digit;
			p = 1;

			if (s[m + 1] < '0' || s[i + 1] > '9')
				break;
			p = 0;
		}
		m++;
	}

	if (p == 0)
		return (0);

	return (0);
}
