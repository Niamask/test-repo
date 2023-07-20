#include <stdio.h>
#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 * @b : b integer
 *
 * Return: nothing
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == n-1)
			printf("%d ",a[i]);
		else
			printf("%d, ",a[i]);
	}
	 printf("\n");  
}
