#include "lists.h"
#include <stdio.h>
/**
 * sum_listint - function that returns the sum of all the data of a listint_t.
 * @head: linked list of type listint_t to print
 *
 * Return: number of nodes
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *p = head;

	if (head == NULL)
		return (0);

	while (p != NULL)
	{
		sum = sum + p->n;
		p = p->next;
	}

	return (sum);
}
