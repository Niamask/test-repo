#include <ctype.h>
#include "main.h"
/**
 * _islower - checks for lower case
 * @c: The character to check
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	return (0);
}
