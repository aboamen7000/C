#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - a function that deletes the head node
 * of a listint_t linked list, and returns the head node’s
 * data (n)
 *
 * @head: head of the list
 *
 * Return: node of head (n)
 *
 */

int pop_listint(listint_t **head)
{
	listint_t *trash;
	int numb;

	if (*head != NULL)
	{ }
	else
	{
		return (0);
	}

	trash = *head;
	numb = trash->n;
	*head = (*head)->next;
	free(trash);

	return (numb);
}
