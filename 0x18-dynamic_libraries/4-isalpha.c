#include "main.h"
#include <ctype>
/**
 * _isalpha - checks for alphabetic character.
 *
 * Returns: return 0 on success and 1 on fail
 */
int _isalpha(int c)
{
	int i = isalpha(int c);

	if (i > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

