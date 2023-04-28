#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @n: The int to check
 *
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
	int d = abs(n % 10);

	_putchar('0' + d);
	return (d);
}
