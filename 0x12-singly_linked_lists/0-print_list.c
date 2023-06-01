#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: pointer to list_t
 *
 * Return: 0 or 1.
 */

size_t print_list(const list_t *h)
{
	const list_t *p;
	int cp = 0;

	if (h == NULL)
		return (0);
	p = h;
	while (p != NULL)
	{
		if (p->str != NULL)
			printf("[%d] %s\n", p->len, p->str);
		else
			printf("[0] (nil)\n");
		p = p->next;
		cp++;
	}
	return (cp);
}
