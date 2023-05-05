#include <stdio.h>
#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0.
 * @n : integer
 *
 * Return: nothing
 */
void print_times_table(int n)
{
	int i, j, x;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			x = i * j;
			if (j != 0)
			{
				if (x >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((x / 100) + '0');
					_putchar(((x % 100) / 10) + '0');
					_putchar((x % 10) + '0');
				}
				else if (x >= 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((x / 10) + '0');
					_putchar((x % 10) + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(x + '0');
				}
			}
			else
				_putchar(x + '0');
		}
		_putchar('\n');
	}
}
