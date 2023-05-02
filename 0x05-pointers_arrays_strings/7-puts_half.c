#include "main.h"
/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int len0, n, i;

	len0 = 0;
	while (str[len0] != '\0')
	{
		len0++;
	}
	if (len0 % 2 == 0)
	{
		for (i = len0 / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	} else if (len0 % 2)
	{
		for (n = (len0 - 1) / 2; n < len0 - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
