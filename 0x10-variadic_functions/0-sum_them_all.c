#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * main - function that returns the sum of all its parameters.
 * @n: const integer.
 *
 * Return: sum.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		int x = va_arg(args, int);

		sum += x;
	}
	va_end(args);

	return (sum);
}
