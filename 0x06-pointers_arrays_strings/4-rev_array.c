#include "main.h"

/**
 * reverse_array - everses the content of an array of integers.
 * @a: the tab integer
 * @n: the number
 *
 * Return: 1 or 0
 */

void reverse_array(int *a, int n)
{
	int i = 0, t, f;
	int c;

	t = n - 1;
	f = t / 2;

	while (i <= f)
	{
		c = a[i];
		a[i] = a[t];
		a[t] = c;
		i++;
		t--;
	}
}
