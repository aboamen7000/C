#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - a function that deletes
 * the node at index index of a listint_t linked list
 * @head: head of list
 * @index: index list which nodes deleted.
 * Return: (1) if successfully, else (0) error
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *oldest;
	unsigned int indexo;
	listint_t *newest;

	oldest = *head;

	if (index == 0)
	{ }
	else
	{
		for (indexo = 0; indexo < index - 1 && oldest != NULL; indexo++)
		{
			oldest = oldest->next;
		}
	}

	if (oldest == NULL || (oldest->next == NULL && index != 0))
	{
		return (-1);
	}

	newest = oldest->next;

	if (index == 0)
	{
		free(oldest);
		*head = newest;
	}
	else
	{
		oldest->next = newest->next;
		free(newest);
	}

	return (1);
}
