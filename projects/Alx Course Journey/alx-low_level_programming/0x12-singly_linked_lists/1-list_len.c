#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - gets the number of nodes
 *
 * @h: ptr first node
 *
 * Return: number of nodes
 */

size_t list_len(const list_t *h)
{
size_t counter = 1;
/*if head is null return 0 nodes*/
if (h == NULL)
{
return (0);
}
while (h->next != NULL)
{
h = h->next;
counter++;
}
return (counter);
}
