#include "lists.h"
#include<string.h>
/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: pointer to the start of the list
 * @str: string
 * Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
char *dest;
new_node = (list_t *)malloc(sizeof(list_t));
if (new_node == NULL)
{
return (NULL);
}
dest = strdup(str);
new_node->str = dest;
new_node->len = strlen(str);
new_node->next = *head;
*head = new_node;
return (*head);
}

