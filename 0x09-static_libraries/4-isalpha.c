#include <ctype.h>
#include "main.h"
/**
 * _isalpha - checks for alpha
 * @c: The character to check
 *
 * Return: 1 if c is alpha, 0 otherwise
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	return (0);
}
