#include <stdio.h>
#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 * @b : b integer
 *
 * Return: nothing
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while(dest[i] != '\0')
		i++;

	while(src[j] != '\0')
	{
		if (j < n)
		{
			dest[i] = src[j];
			i++;
			j++;
		}
		else
			break;
	}
	
	return(dest);
}
