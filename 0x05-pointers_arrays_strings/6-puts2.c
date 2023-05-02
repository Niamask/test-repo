#include "main.h"

/**
 * puts2 - prints every other char of a string, starting with the first char
 * followed by a new line
 * @str: string to print the chars from
 */
void puts2(char *str)
{
	int len0, i;

	len0 = 0;
	while (str[len0] != '\0')
	{
		len0++;
	}
	for (i = 0; i < len0; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
