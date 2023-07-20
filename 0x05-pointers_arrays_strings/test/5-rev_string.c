#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 * @b : b integer
 *
 * Return: nothing
 */
void rev_string(char *s)
{
	int i = 0;
	char c;

	while (s[i] != '\0')
		i++;
	i--;
	while (i >= 0)
	{
		c = s[i];
		i++;
	}
}
