#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - a function that frees a listint_t list.
 * @head: the list
 *
 * Return: 1 or 0
 */

void free_listint(listint_t *head)
{
	listint_t *p, *tmp;

	p = head;
	while (p != NULL)
	{
		tmp = p;
		p = p->next;
		free(tmp);
	}
}
