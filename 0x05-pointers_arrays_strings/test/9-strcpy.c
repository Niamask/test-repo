#include <stdio.h>
#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 * @b : b integer
 *
 * Return: nothing
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while( src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
