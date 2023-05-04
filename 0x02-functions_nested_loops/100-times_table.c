#include <stdio.h>
#include "main.h"
/**
 * print_times_table - prints the n times table, starting with 0.
 * @b : b integer
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
			printf("%d", x);
			if (j != n)
			{
				if (x > 100)
					printf(", ");
				else if (x > 10)
					printf(",  ");
				else
					printf(",   ");
			}
		}
		printf("\n");
	}
	printf("\n");
}
