#include <ctype.h>
#include "main.h"
/**
 * jack_bauer - prints every minute of a day
 *
 * Return: nothing
 */
void jack_bauer(void)
{
	int h = 0;

	while (h <= 23)
	{
		int m = 0;

		while (m <= 59)
		{
			int hfd = h / 10;
			int hld = h % 10;
			int mfd = m / 10;
			int mld = m % 10;

			_putchar(hfd + '0');
			_putchar(hld + '0');
			_putchar(':');
			_putchar(mfd + '0');
			_putchar(mld + '0');
			_putchar('\n');
			m++;
		}
		h++;
	}
}
