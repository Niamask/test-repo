#include <stdio.h>
/**
 * main - prints the number of arguments passed into it.
 * @argc : integer
 * @argv : string array
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

        for(i = 0; i < argc; i++)
        {
                printf("%d\n", i);
        }

        return(0);
}
