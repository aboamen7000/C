#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * listint_len - a function that returns the number of
 * elements in a linked listint_t list.
 *
 * @h: ptr
 *
 * Return: numbs of elements
 *
 */

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
	h = h->next;
		counter++;
	}
	return (counter);
}
