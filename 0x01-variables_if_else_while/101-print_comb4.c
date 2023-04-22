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

	while (x <= '7')
	{
		int y = x + 1;
		
		while (y <= '8')
		{
			int z = y + 1;
			
			while (z <= '9')
			{
				putchar(x);
				putchar(y);
				putchar(z);
				if (x != '7')
				{
					putchar(',');
					putchar(' ');
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
