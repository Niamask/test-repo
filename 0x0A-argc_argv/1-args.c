#include <stdio.h>
#define UNUSED(x) (void)(x)
/**
 * main - prints the number of arguments passed into it.
 * @argc : integer
 * @argv : string array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	UNUSED(argv);
	printf("%d\n", argc - 1);
	return (0);
}
