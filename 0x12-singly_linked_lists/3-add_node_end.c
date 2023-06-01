#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
* _strlen_recursion - function lenght of a string
* @s: string.
*
* Return: Always 0.
*/

int _strlen_recursion(const char *s)
{

	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * add_node_end - a function that adds a new node at the end of a list_t list.
 * @head: pointer
 * @str: string
 *
 * Return: 1 or 0
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *p = *head;

	new =  malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = _strlen_recursion(str);
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

