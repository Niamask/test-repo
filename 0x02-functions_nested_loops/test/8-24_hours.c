#include <stdlib.h>
#include "main.h"
/**
 * jack_bauer - computes the absolute value of an integer
 * @n: The int to compute its abs
 *
 * Return: the absolute value of an integer
 */
void jack_bauer(void)
{
	int x = '0';
	while ( x <= '2')
	{
		int y = '0';
		int k = '9';

		if ( x == '2')
			k = '3';

		while (y <= k)
        	{
			int z = '0';
			while ( z <= '5')
        		{
				int n = '0';
				while ( n <= '9')
        			{
					_putchar(x);
					_putchar(y);
					_putchar(':');
					_putchar(z);
					_putchar(n);
					_putchar('\n');
					n++;
        			}
				z++;
        		}
			y++;
        	}
		x++;
	}
}
