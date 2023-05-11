#include <stdio.h>
 /*
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, sum3, multi3, sum5, multi5;

	i = 1;
	sum3 = 0;
	sum4 = 0;

	while (sum3 < 1024)
	{
		multi3 = 3 * i;
		sum3 = sum3 + multi3;
		i++;
	}
	while (sum5 < 1024)
	{
		multi5 = 5 * i;
		sum5 = sum5 + multi5;
		i++;
	}
	printf("Sum of all the multiples of 3: %d\n", sum3);
	printf("Sum of all the multiples of 5: %d\n", sum5);
	return (0);
}
