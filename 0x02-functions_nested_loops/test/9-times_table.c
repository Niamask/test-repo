#include <ctype.h>
#include <stdio.h>
#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
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
                	int z = x * y;
			
			if (z > 9)
			{
				int ld = z % 10;
				int fd = z / 10;
				_putchar(',');
				_putchar(' ');
				_putchar('0' + fd);
				_putchar('0' + ld);
			}
			else if (y > 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + z);
				
			}
			else 
			{
				_putchar('0' + z);
			}
			y++;
        	}
		 _putchar('\n');
		 x++;
	}
}
