#include <stdio.h>
/**
 * print_diagsums - prints the sum of the 2 diagonals of a square matrix of integers.
 * @a: the matrix
 * @size: the length of matrice
 *
 * Return: 1 or 0
 */
void print_diagsums(int *a, int size)
{
	int	i =0, *p, j = 0;
	
	for (i = 0; i < size; i++)
	{
		p = a;
		for (j = 0 ; j < size; j++)
			printf("%d ",p[j]);
		p++;
		printf("\n");
	}
}
