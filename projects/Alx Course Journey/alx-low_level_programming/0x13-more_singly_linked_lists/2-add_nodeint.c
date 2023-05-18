#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - a function that adds a new node
 * at the beginning of a listint_t list
 *
 * @head: pointer to the head of the list
 * @n: integer to add to the new node
 *
 * Return: addresses of element
 *
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *adding;

	adding = malloc(sizeof(listint_t));

	if (adding != NULL)
	{ }
	else
	{ return (NULL); }
	adding->n = n;
	adding->next = *head;
	*head = adding;
	return (adding);
}
