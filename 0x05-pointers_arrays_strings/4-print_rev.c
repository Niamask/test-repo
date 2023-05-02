#include "main.h"
/**
 * print_rev - prints a string, in reverse.
 * @s : string
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int i, j, len0;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	len0 = i;
	for (j = len0 - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
