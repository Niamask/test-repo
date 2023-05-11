#include<stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers...
 *
 * Return: Always 0.
 */
int main(void)
{
	int t1 = 0, t2 = 1, nextTerm = 0;

	nextTerm = t1 + t2;
	while (nextTerm <= 50)
	{
		printf("%d, ", nextTerm);
		t1 = t2;
		t2 = nextTerm;
		nextTerm = t1 + t2;
	}

	return (0);
}
