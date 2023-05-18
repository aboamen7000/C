#include "lists.h"

/**
 * print_listint - a function that prints
 * all the elements of a listint_t
 * @h: head of node list
 * Return: the numbs nodes
 */

size_t print_listint(const listint_t *h)
{
size_t counter_nodes = 0;

while (h)
{
printf("%d\n", h->n);
h = h->next;
counter_nodes++;
}

return (counter_nodes);
}
