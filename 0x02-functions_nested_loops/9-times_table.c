#include <ctype.h>
#include "main.h"
/**
 * times_table - prints the 9 time tables
 *
 * Return: nothing
 */
void times_table(void)
{
	int x = 0;

	while (x <= 9)
	{
		int m = 0;

		while (m <= 9)
		{
			int r = x * m;
			int rfd = r / 10;
			int rld = r % 10;

			if (rfd != 0)
			{
				_putchar('0' + rfd);
			}
			_putchar('0' + rld);

			if (m < 9)
			{
				_putchar(',');
				_putchar(' ');
				if (r <= 9)
				{
					_putchar(' ');
				}
			}
			m++;
		}
		_putchar('\n');
		x++;
	}
}
