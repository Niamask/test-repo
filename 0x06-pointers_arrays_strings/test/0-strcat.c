#include <stdio.h>
#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 * @b : b integer
 *
 * Return: nothing
 */
char *_strcat(char *dest, char *src)
{
	int i, j;
	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;
	while(src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	return(dest);
}
