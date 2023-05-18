#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - a function that
 * returns the nth node of a listint_t linked list
 *
 * @head: head of the list
 *
 * @index: index of the node
 *
 * Return: node of head (n)
 *
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int indexo;

	for (indexo = 0; indexo < index && head; indexo++)
	{
		head = head->next;
	}

	return (head);
}
