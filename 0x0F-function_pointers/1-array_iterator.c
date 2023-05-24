#include <stddef.h>

/**
 * array_iterator - a function given as a parameter
 * @array: integer array
 * @size: size of array
 * @action: pointer to function
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL)
		return;
	for (i = 0; i < size; i++)
		(*action)(array[i]);
}
