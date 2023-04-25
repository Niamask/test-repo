#include <stdlib.h>
#include "main.h"
/**
 * print_last_digit - prints last digit of an integer
 * @n: The int to print its last digit
 *
 * Return: the last digit of an integer
 */
int print_last_digit(int n)
{
	int ld = abs(n % 10);

	_putchar('0' + ld);
	return (ld);
}
