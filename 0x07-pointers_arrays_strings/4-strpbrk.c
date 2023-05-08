#include <string.h>
/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: string
 * @accept: string
 *
 * Return: 1 or 0
 */
char *_strpbrk(char *s, char *accept)
{
	if ((s == NULL) || (accept == NULL))
		return (NULL);
	while (*s)
	{
		if (strchr(accept, *s))
		{
			return (s);
		}
		else
		{
			s++;
		}
	}
	return (NULL);
}
