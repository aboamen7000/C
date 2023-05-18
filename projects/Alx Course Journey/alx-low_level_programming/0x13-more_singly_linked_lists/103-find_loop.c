#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * find_listint_loop - a function that finds the loop in a linked list
 * @head: ptr to head of list
 * Return: addrs of node when loop starting
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *first_ptr = head;
	listint_t *second_ptr = head;

	while (first_ptr != NULL)
	{
		second_ptr = second_ptr->next;
		first_ptr = first_ptr->next->next;

		if (second_ptr != first_ptr)
		{ }
		else
		{ second_ptr = head;

			while (second_ptr != first_ptr)
			{
				second_ptr = second_ptr->next;
				first_ptr = first_ptr->next;
			}
			return (second_ptr);
		}
	}
	return (NULL);
}
