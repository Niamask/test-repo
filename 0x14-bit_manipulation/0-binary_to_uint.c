#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b : character
 *
 * Return: 0 or converted number.
 */

unsigned int binary_to_uint(const char *b)
{
	int i, j = 0;
	unsigned int sum = 0;

	for (i = strlen(b) - 1 ; i >= 0; i--)
	{
		if (b[i] == '1')
		{
			sum += pow(2, j);
			j++;
		}
		else if (b[i] == '0')
		{
			sum += 0;
			j++;
		}
		else
			return (0);
	}
	return (sum);
}
