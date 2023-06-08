#include <stdio.h>
#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <math.h>

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b : character
 *
 * Return: 0 or converted number.
 */
unsigned int binary_to_uint(const char *b)
{
	long unsigned int i, sum = 0; 
	/*int x = atoi(b)*/;

	for (i = 0; i < strlen(b); i++)
	{
	/*	printf("%c", b[i]);*/
		sum += atoi(b[i]);

		/*if ( b[i] == 1)
			sum += pow(2, i);*/
	}
	

	return (sum);
}
