#include <stdio.h>
/*
 * main - Prints the sum of all the multiples of 3 or 5 below 1024.
 *
 * Return: Always 0.
 */

int main(void)
{
	int i, sum3, multi3, sum5, multi5;

	i = 1;
	sum3 = 0;
	sum5 = 0;

	while (i < 1024)
	{
		multi3 = 3 * i;
		sum3 = sum3 + multi3;
		i++;
	}
	while (i < 1024)
	{
		multi5 = 5 * i;
		sum5 = sum5 + multi5;
		i++;
	}
	printf("Sum of all the multiples of 3: %d\n", sum3);
	printf("Sum of all the multiples of 5: %d\n", sum5);
	return (0);
}
