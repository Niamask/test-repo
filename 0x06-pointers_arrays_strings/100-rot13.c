#include<stdio.h>
/**
 * remplace13 - a function that remplace a string
 * @r: char
 *
 * Return: char
 */
char remplace13(char r)
{
	if ((r > 64) && (r < 91))
	{
		r = ((r - 65 + 13) % 26) + 65;
	}

	if ((r > 96) && (r < 123))
	{
		r = ((r - 97 + 13) % 26) + 97;
	}

	return (r);
}
/**
 * rot13 - a function that encodes a string using rot13.
 * @str: the chaine of caractere
 *
 * Return: str
 */
char	*rot13(char *str)
{
	int i = 0;

	while (str[i])
	{
		str[i] = remplace13(str[i]);
		i++;
	}
	return (str);
}
