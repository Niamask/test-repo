#include <stdio.h>
#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 * @b : b integer
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int i = 0, m;

	while(str[i] != '\0')
		i++;

	m = i / 2;

	while ( str[m] != '\0')
	{
		_putchar(str[m]);
		m++;
	}
	_putchar('\n');
}
