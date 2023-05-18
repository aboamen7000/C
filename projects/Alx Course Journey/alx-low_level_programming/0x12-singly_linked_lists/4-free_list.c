#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - single link
 *
 * @head: ptr first node
 *
 * Return: Nothing
 */

void free_list(list_t *head)
{
	list_t *new;

	while ((new = head) != NULL)
	{
		head = head->next;
		free(new->str);
		free(new);
	}
}
