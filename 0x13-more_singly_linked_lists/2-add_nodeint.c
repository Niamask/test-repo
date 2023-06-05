#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_nodeint - a function that adds a new node the beginning of a listint_t.
 * @head: the list
 * @n: the chaine
 *
 * Return: 1 or 0
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new =  malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
