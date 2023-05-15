#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width :  integer
 * @height : integer
 *
 * Return: 1 or 0.
 */

int **alloc_grid(int width, int height)
{
	int **table;
	int i, j;

	if (width == 0 || height == 0)
		return (NULL);
	table = malloc(height * sizeof(int *));

	if (table == NULL)
		return (NULL);

	for (i = 0; i < height; ++i)
	{
		table[i] = malloc(width * sizeof(int));
		if (table[i] == NULL)
		{
			for (; i >= 0; i--)
				free(table[i]);
			free(table);
			return (NULL);
		}
	}

	for (i = 0; i < height; ++i)
		for (j = 0; j < width; j++)
			table[i][j] = 0;

	return (table);
}
