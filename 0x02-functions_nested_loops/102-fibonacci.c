#include<stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers...
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, t1 = 0, t2 = 1, nextTerm = 0;

	nextTerm = t1 + t2;
	for (i = 0; i <= 50; i++)
	{
		printf("%d, ", nextTerm);
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
	}

	return (0);
}
