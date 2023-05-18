#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers.
 * @min: min input
 * @max: max input
 * Return: pointer to new arr of ints
 */
int *array_range(int min, int max)
{
	int *ar;
	int i, len;

	if (min > max)
		return (NULL);

	len = max - min + 1;

	ar = malloc(sizeof(int) * len);

	if (ar == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		ar[i] = min++;

	return (ar);
}
