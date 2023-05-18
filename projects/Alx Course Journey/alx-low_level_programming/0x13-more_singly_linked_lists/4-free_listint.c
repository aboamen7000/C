#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list
 *
 * @head: ptr to the head of the list
 *
 * Return: nothing
 *
 */

void free_listint(listint_t *head)
{
	listint_t *trash;

	while ((trash = head) != NULL)
	{
		head = head->next;
		free(trash);
	}
}
