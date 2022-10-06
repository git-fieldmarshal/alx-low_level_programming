#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * count_word -
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count word(char *s)
{
	int flag, c, w;

	flag = 0;
	w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			w++;
		}
	}

	return (w);
}
/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings, NULL if fail
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int m, n = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_words(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (m = 0; m <= len; m++)
	{
		if (str[m] == ' ' || str[m] == '\0')
		{
			if (c)
			{
				end = m;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[n] = tmp - c;
				m++;

				c = 0;
			}
		}
		else if (c++ == 0)
			start = m;
	}

	matrix[n] = NULL;

	return (matrix);
}
