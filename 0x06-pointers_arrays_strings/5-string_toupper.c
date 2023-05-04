#include<stdio.h>
/**
 * upper - changes all lowercase letters of a string to uppercase.
 * @c: char
 *
 * Return: 1 or 0.
 */

char	upper(char c)
{
	char x;

	if (c >= 'a' && c <= 'z')
		x = c + 'A' - 'a';
	else
		x = c;
	return (x);
}

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @str: char
 *
 * Return: str
 */

char	*string_toupper(char *str)
{
	int
	i = 0;
	while (str[i])
	{
		str[i] = upper(str[i]);
		i++;
	}
	return (str);
}
