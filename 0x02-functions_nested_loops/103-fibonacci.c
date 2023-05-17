#include<stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers...
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	unsigned long t1 = 1, t2 = 2, nextTerm, sum = 0;

	for (i = 0; i <= 33; i++)
	{
		if (t1 < 4000000 && (t1 % 2) == 0)
		{
			sum = sum + t1;
		}
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
	}
	printf("%lu\n", sum);
	return (0);
}
