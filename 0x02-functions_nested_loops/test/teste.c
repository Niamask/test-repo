#include <ctype.h>
#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet in lower case followed by new line x10
 *
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	int x = '0';
	int i;

	while (x <= '9')
	{
		int y = 'A';

		while (y <= 'Z')
		{
			_putchar(tolower(y));
			y++;
		}
		_putchar('\n');
		x++;
	}

        for (i = 0; i < 10; i++)
        {
                printf("%d\n", i);
        }
}
