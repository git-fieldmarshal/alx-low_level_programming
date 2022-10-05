#include <stdio.h>
#include "main.h"
/**
 * main -  program that prints all arguments it receives
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int m;

	for (m = 0; m < argc; m++)
	{
		printf("%s\n", argv[m]);
	}

	return (0);
}
