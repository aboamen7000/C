#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - Add a new node at the end of a list
 * @head: get first node
 * @str: str to insert into node
 * Return: new node
 **/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *first, *second;
unsigned int lentho = 0;
if (str == NULL)
return (NULL);
first = malloc(sizeof(list_t));
if (first == NULL)
return (NULL);
first->str = strdup(str);
if (first->str == NULL)
{
free(first);
return (NULL);
}
while (str[lentho])
lentho++;
first->len = lentho;
first->next = NULL;
if (*head == NULL)
{
*head = first;
return (first);
}
second = *head;
while (second->next)
second = second->next;
second->next = first;
return (first);
}
