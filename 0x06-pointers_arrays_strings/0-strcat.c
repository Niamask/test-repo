#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * *_strcat - concatenates two strings.
 * @dest : string
 * @src : string
 *
 * Return: nothing
 */
char *_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] && dest[i] != '\0')
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
