#include <ctype.h>
#include "main.h"
/**
 * print_sign - checks for signs
 * @n: The int to check
 *
 * Return: 1 and print + if n is > 0,
 * 0 and prints 0 if n is zero,
 * -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
