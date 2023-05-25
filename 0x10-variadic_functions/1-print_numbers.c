#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function that prints numbers, followed by a new line.
 * @separator: character
 * @n: integer
 *
 * return: nothing.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	if (separator != NULL)
	{
		va_start(args, n);
		for (i = 0; i < n; i++)
		{
			int x = va_arg(args,unsigned int);

			if (i == (n - 1))
				printf("%d", x);
			else
				printf("%d%s", x, separator);
		}
		printf("\n");
	}
	va_end(args);
}
