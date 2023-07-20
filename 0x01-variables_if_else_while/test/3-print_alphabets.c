#include <stdio.h>
/**
 *main - prints the 9 times table, starting with 0.
 *
 * Return: nothing
 */

int main(void)
{
        char c;

        for (c = 'a'; c <= 'z'; c++)
        {
                putchar(c);
        }
	for (c = 'A'; c <= 'Z'; c++)
        {
                putchar(c);
        }
        putchar('\n');
        return(0);
}

