#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: ptr
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
size_t index = 0;

while (h)
{
if (h->str)
{
printf("[%u] %s\n", h->len, h->str);
}
else
{
printf("[0] (nil)\n");
}
h = h->next;
index++;
}
return (index);
}
