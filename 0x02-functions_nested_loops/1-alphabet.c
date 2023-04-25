#include <ctype.h>
#include "main.h"
/**
 * print_alphabet - prints the alphabet in lower case followed by new line
 *
 * Return: nothing
 */
void print_alphabet(void)
{
	int x = 'A';

	while (x <= 'Z')
	{
		_putchar(tolower(x));
		x++;
	}
	_putchar('\n');
}
