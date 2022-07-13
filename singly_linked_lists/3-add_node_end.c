#include "lists.h"
/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: pointer to the start of the list
 * @str: string
 * Return: the adress of the new element
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node;
list_t *tail;
new_node = (list_t *)malloc(sizeof(list_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->str = strdup(str);
new_node->len = strlen(str);
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
}
else
{
tail = *head;
while (1)
{
if (tail->next == NULL)
{
tail->next = new_node;
break;
}
tail = tail->next;
}
}
return (new_node);
}
