#include <string.h>
/**
 * set_string - a function that sets the value of a pointer to a char.
 * @s: the pointer of char
 * @to: string
 *
 * Return: 1 or 0
 */
void set_string(char **s, char *to)
{
	*s = to;
}
