#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str : character
 *
 * Return: 1 or 0.
 */

char *_strdup(char *str)
{
	char *p;
	int len = 0, i = 0;

	if (str == NULL)
		return (NULL);
	while (str[len])
		len++;
	p = malloc((len + 1) * sizeof(char));
	if (p != NULL)
	{
		while (str[i])
		{
			p[i] = str[i];
			i++;
		}
		p[i] = '\0';
	}
	return (p);
}
