#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * _strdup - a function that duplicate to a newly allocated space
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *mhn;
	int m, n = 0;

	if (str == NULL)
		return (NULL);

	m = 0;
	while (str[m] != '\0')
		m++;

	mhn = malloc(sizeof(char) * (m + 1));

	if (mhn == NULL)
		return (NULL);

	for (n = 0; str[n]; n++)
		mhn[n] = str[n];

	return (mhn);
}
