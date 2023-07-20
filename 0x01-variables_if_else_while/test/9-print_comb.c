#include <stdio.h>
/**
 *main - prints the 9 times table, starting with 0.
 * @b : b integer
 *
 * Return: nothing
 */

int main(void)
{
        int c;

        for (c = 0; c <= 9; c++)
        {
		putchar('0' + c);
		if (c != 9)
		{
			putchar(',');
        		putchar(' ');
		}
	}
        putchar('\n');
        return(0);
}
