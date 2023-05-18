#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - adds a node at the beginning of the linked list
 *
 * @head: ptr first node
 * @str: str to add into node
 *
 * Return: return null if failing
*/

list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
unsigned int length_counter = 0;
while (str[length_counter])
length_counter++;
new_node = malloc(sizeof(list_t));
if (!new_node)
return (NULL);
new_node->str = strdup(str);
new_node->len = length_counter;
new_node->next = (*head);
(*head) = new_node;
return (*head);
}
