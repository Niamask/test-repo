#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers.
 * @argc : integer
 * @argv : string array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) >= 0)
				sum += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (0);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
