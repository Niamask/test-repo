#include <stdio.h>
#include <ctype.h>
#include "main.h"
/**
 * times_table - prints the nine time tables
 *
 * Return: nothing
 */
void times_table(void)
{
	int x = 0;

	while (x <= 9)
	{
		int y = 0;

		while (y <= 9)
		{
			int r = x * y;
			int fd = r / 10;
			int ld = r % 10;

			if (x == 2 && y == 5)
			{
				printf("x=2, y=5, fd=%d\n", fd);
				printf("x=2, y=5, ld=%d\n", ld);
			}
			if (fd != 0)
			{
				_putchar('0' + fd);
				_putchar('|');
			}
			_putchar('0' + ld);
			_putchar('|');

			if (y < 9)
			{
				_putchar(',');
				_putchar('|');
				_putchar(' ');
				_putchar('|');
				if (fd == 0)
				{
					_putchar(' ');
					_putchar('|');
				}
			}
			y++;
		}
		_putchar('\n');
		x++;
	}
}
