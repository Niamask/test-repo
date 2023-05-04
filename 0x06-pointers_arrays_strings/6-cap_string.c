#include<stdio.h>
/**
 * upper - upper all words of a string.
 * @c: the caractere
 *
 * Return: 1 or 0.
 */

char	upper(char c)
{
	char	s;

	if (c >= 'a' && c <= 'z')
		s = c + 'A' - 'a';
	else
		s = c;
	return (s);
}

/**
 * cap_string - capitalizes all words of a string.
 * @str: the chaine of caractere
 *
 * Return: str
 */

char	*cap_string(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		str[i] = upper(str[i]);
		i++;
	}
	return (str);
}

