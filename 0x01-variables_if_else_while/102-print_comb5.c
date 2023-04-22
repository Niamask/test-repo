#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = '0';

	while (x <= '9')
	{
		int y = '0';

		while (y <= '8')
		{
			int z = x;
			while (z <= '9')
			{
				int t;
				if (z != '0')
					t = y + 1;
				else
					t = y;
				
				while (t <= '9')
				{
					putchar(x);
					putchar(y);
					putchar(' ');
					putchar(z);
					putchar(t);
					if (x != '9' || y != '8')
					{
						putchar(',');
						putchar(' ');
					}
					t++;
				}
				z++;
			}
			y++;
		}
		x++;
	}
	putchar('\n');
	return (0);
}
