#include <ctype.h>
#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 * @b : b integer
 *
 * Return: nothing
 */
int _atoi(char *s)
{
	int x, i = 0;

	while ( s[i] != '\0')
	{
		if(isdigit(s[i]))
			x = s[i];
		i++;
	}
	return (x + '0');
}
