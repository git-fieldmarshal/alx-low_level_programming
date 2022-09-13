#include <stdio.h>
/**
 * main - prints all single digit numbers
 *
 * Return: Always 0
 */
int main(void)

{
	int num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
		
		if (num == 57)
		{
			break;
		}

		putchar(',');
		putchar (' ');
	}

	putchar ('\n');

	return (0);
}
