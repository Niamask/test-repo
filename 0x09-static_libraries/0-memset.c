/**
 * _memset - a function that fills memory with a constant byte.
 * @s: string
 * @b: char
 * @n: int
 *
 * Return: 1 or 0
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
