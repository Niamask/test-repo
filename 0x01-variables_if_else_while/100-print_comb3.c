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
	int y = '1';
	
	while (x <= '8')
	{
		int z = y;
		
		while (z <= '9')
		{
			putchar(x);
			putchar(z);
			if (x != '8')
			{
				putchar(',');
				putchar(' ');
			}
			z++;
		}
		y++;
		x++;
	}
	putchar('\n');
	return (0);
}
