#include "lists.h"
#include <stdlib.h>

/**
 * free_list - a function that frees a list_t list.
 * @head: pointer to list
 *
 * Return: 1 or 0
 */

void free_list(list_t *head)
{
	list_t *p, *tmp;

	p = head;
	while (p != NULL)
	{
		tmp =  p;
		p = p->next;
		free(tmp->str);
		free(tmp);
	}
}
