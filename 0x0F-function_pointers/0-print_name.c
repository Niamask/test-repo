#include<stddef.h>
/**
 * print_name - prints a name.
 * @name: name of the person
 * @f: pointer to a function
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	(*f)(name);
}
