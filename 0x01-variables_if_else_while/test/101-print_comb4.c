#include <stdio.h>
/**
 * main - prints the 9 times table, starting with 0.
 *
 * Return: nothing
 */

int main(void)
{
        int i, j, k;

        for(i = 0; i <= 7; i++)
        {
		for(j = i + 1; j <= 8; j++)
        	{
			for(k = j + 1; k <= 9; k++)
                	{
					putchar('0' + i);
                                        putchar('0' + j);
                                        putchar('0' + k);
					if (i != 7)
					{	
						putchar(',');
                                        	putchar(' ');
					}
			}
			
		}
	
	}
	j++;
	k++;
        putchar('\n');
        return(0);
}

