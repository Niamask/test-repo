#include <stdio.h>
/**
 *main - prints the 9 times table, starting with 0.
 *
 * Return: nothing
 */

int main(void)
{
        int i, j, k;

	k = 1;
        for(i = 0; i <= 8; i++)
        {
                for(j = k; j <= 9; j++)
                {
			if( i != j)
			{
				putchar('0' + i);
				putchar('0' + j);

                        	if( i != 8 || j != 9)
                        	{
					putchar(',');
                                        putchar(' ');
                        	}
			}
                }
                k++;
        }
        putchar('\n');
        return(0);
}
