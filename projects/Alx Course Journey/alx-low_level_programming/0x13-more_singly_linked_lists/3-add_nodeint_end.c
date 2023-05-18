#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node
 * at the end of the node
 *
 * @head: ptr to the head of the list
 * @n: integer to add to the new node
 *
 * Return: addresses of element
 *
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newest, *last_one;

	newest = malloc(sizeof(listint_t));
	if (newest == NULL)
		return (NULL);
	newest->n = n;
	newest->next = NULL;
	if (*head != NULL)
	{ }
	else
	{
		*head = newest;
		return (newest);
	}
	last_one = *head;
	while (last_one->next)
	{
		last_one = last_one->next;
	}
	last_one->next = newest;
	return (newest);
}
