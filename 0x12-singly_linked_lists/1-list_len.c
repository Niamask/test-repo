#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list.
 * @h: pointer to list
 *
 * Return: 1 or 0
 */

size_t list_len(const list_t *h)
{
	const list_t *p;
	int cp = 0;

	if (h == NULL)
		return (0);
	p = h;
	while (p != NULL)
	{
		cp++;
		p = p->next;
	}
	return (cp);
}
