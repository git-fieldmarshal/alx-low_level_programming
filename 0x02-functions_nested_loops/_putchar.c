#include <unistd.h>
/**
 * _putchar - writes the character to stdour
 *
 * Retrn: Always 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
