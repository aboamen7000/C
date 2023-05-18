#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - a function that returns the sum
 * of all the data (n) of a listint_t linked list
 *
 * @head: head of list
 *
 * Return: sum of data's (n)
 *
 */

int sum_listint(listint_t *head)
{
	int calc;

	/** reset the var int */
	calc = 0;

	while (head != NULL)
	{
		calc += head->n;
		head = head->next;
	}

	return (calc);
}
