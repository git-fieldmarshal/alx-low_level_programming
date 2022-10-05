#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * str_concat - a function that concatenates two strings
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2, NULL if fail
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int m, mh;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	m = mh = 0;
	while (s1[m] != '\0')
		m++;

	while (s2[mh] != '\0')
		mh++;

	conct = malloc(sizeof(char) * (m + mh + 1));

	if (conct == NULL)
		return (NULL);
	m = mh = 0;
	while (s1[m] != '\0')
	{
		conct[m] = s1[m];
		m++;
	}

	while (s2[mh] != '\0')
	{
		conct[m] = s2[mh];
		m++, mh++;
	}
	conct[m] = '\0';
	return (conct);
}
