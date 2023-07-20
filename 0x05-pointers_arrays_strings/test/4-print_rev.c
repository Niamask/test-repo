#include <stdio.h>
#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 * @b : b integer
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int i = 0;
	
	while (s[i] != '\0')
		i++;

	i--;
	while (i >= 0 )
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
