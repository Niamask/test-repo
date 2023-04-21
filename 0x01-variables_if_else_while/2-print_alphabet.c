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
		putchar(tolower(x));
		x++;
	}
	putchar('\n');
	return (0);
}
