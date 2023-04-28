#include "main.h"
/**
 * print_alphabet - prints the alphabe
 *
 * Return: nothing.
 */

void print_alphabet(void)
{
	int x = 'a';

	while (x <= 'z')
	{
		_putchar(x);
		x++;
	}
	_putchar('\n');
}

