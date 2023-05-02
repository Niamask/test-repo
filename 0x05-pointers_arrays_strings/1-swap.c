#include <stdio.h>
#include "main.h"
/**
 * swap_int - swaps the values of two integers.
 * @a : a integer
 * @b : b integer
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a -= *b;
}

