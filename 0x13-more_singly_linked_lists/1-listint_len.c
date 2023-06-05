#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: the list
 *
 * Return: 1 or 0
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *p;
	int cp = 0;

	if (h == NULL)
		return (0);
	p = h;
	while (p != NULL)
	{
		p = p->next;
		cp++;
	}
	return (cp);
}
