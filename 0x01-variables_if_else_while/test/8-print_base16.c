#include <stdio.h>
/**
 *main - prints the 9 times table, starting with 0.
 * @b : b integer
 *
 * Return: nothing
 */

int main(void)
{
        char c;
	int i;

	for( i = 0; i < 10; i++)
		putchar('0' + i);

        for (c = 'a'; c <= 'f'; c++)
        {
                putchar(c);
        }
        putchar('\n');
        return(0);
}

