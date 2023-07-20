#include <stdio.h>
/**
 *main - prints the 9 times table, starting with 0.
 *
 * Return: nothing
 */

int main(void)
{
	int i,j,f,k;

	for(i = 0; i <= 9; i++)
	{
		for(j = 0; j <= 8; j++)
		{
			 for(f = 0; f <= 9; f++)
        		{
                		for(k = 0; k <= 9; k++)
                		{
                        		putchar('0'+ i);
                        		putchar('0'+ j);
					putchar(' ');
					putchar('0'+ f);
                                        putchar('0'+ k);
					putchar(',');
					putchar(' ');
                		}
        		}
		}
	}

	putchar('\n');
	return(0);	
}
