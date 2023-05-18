#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list
 *
 * @head: head of the list
 *
 * Return: nothing
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *trash;
	listint_t *recently;

	if (head == NULL)
	{ }
	else
	{
		recently = *head;
		while ((trash = recently) != NULL)
		{
			recently = recently->next;
			free(trash);
		}
		*head = NULL;
	}
}
