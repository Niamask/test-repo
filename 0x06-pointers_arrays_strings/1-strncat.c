#include <stdio.h>
#include "main.h"
/**
 * *_strncat - concatenates two strings.
 * @n : integer
 * @dest : string
 * @src : string
 *
 * Return: nothing
 */
char *_strncat(char *dest, char *src, int n)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
