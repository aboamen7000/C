#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - Write a function that
 * inserts a new node at a given position
 * @head: head of list
 * @idx: index list which nodes added.
 * @n: simple int.
 * Return: addr new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int indexo;
	listint_t *header;
	listint_t *newest;

	header = *head;

	if (idx != 0)
	{
		for (indexo = 0; indexo < idx - 1 && header != NULL; indexo++)
		{
			header = header->next;
		}
	}

	if (header == NULL && idx != 0)
	{ return (NULL); }

	newest = malloc(sizeof(listint_t));

	if (newest == NULL)
	{ return (NULL); }

	newest->n = n;

	if (idx == 0)
	{ newest->next = *head;
		*head = newest;
	}
	else
	{ newest->next = header->next;
		header->next = newest;
	}

	return (newest);
}
