#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers.
 * @argc : integer
 * @argv : string array
 *
 * Return: 0 or 1.
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
