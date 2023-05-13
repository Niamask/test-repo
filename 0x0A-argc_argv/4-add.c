#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * main - adds positive numbers.
 * @argc : integer
 * @argv : string array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i, sum = 0, k;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			int length = strlen(argv[i]);
			int isdig = 1;

			for (k = 0; k < length; k++)
			{
				if (isdigit(argv[i][k]) == 0)
				{
					isdig = 0;
					break;
				}
			}
			if (isdig)
			{
				sum += atoi(argv[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	printf("%d\n", sum);
	return (0);
}
