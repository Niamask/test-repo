#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>


/**
 * add_nodeint_end - a function that adds a new node at the end of a listint_t.
 * @head: the list
 * @n: the chaine
 *
 * Return: 1 or 0
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *p = *head;

	new =  malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (p == NULL)
	{
		*head = new;
		return (*head);
	}
	while (p->next != NULL)
		p = p->next;
	p->next = new;
	return (new);
}
