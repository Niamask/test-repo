#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include "main.h"

/**
 * power - function that return a pow of a number n.
 * @n : integer
 * @x : integer
 *
 * Return: 0 or 1 or pow number.
 */
unsigned int power(int n, int x)
{
	int i, pow = 1;

	if (x == 0)
		return (1);
	else if (x == 1)
		return (n);
	for (i = 0; i < x; i++)
	{
		pow *= n;
	}
	return (pow);
}

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

	if (b == NULL)
		return (0);

	for (i = strlen(b) - 1 ; i >= 0; i--)
	{
		if (b[i] == '1')
		{
			sum += power(2, j);
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
