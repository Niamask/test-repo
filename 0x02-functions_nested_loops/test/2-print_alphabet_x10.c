#include <ctype.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet.
 *
 * Return: nothing.
 */
void print_alphabet_x10(void)
{
	int y = '0';

	while (y <= '9')
	{
		int x = 'a';

		while (x <= 'z')
		{
			_putchar(x);
			x++;
		}
		_putchar('\n');
		y++;
	}
}
