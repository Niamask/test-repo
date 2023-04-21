#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = 'A';

	while (x <= 'Z')
	{
		if ((tolower(x) != 'e') && (tolower(x) != 'q'))
		{
			putchar(tolower(x));
		}
		x++;
	}
	putchar('\n');
	return (0);
}
