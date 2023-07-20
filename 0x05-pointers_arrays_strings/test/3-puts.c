#include <stdio.h>
#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 * @b : b integer
 *
 * Return: nothing
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
		{
			_putchar(str[i]);
			i++;
		}
	_putchar('\n');
}
