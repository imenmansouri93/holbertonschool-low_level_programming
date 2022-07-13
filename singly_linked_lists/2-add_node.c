#include "lists.h"
#include<string.h>
/**
 * list_len - function returns the number of elements in a linked list.
 * @h: pointer to the start of the list
 * Return: the number of elements
 */

list_t *add_node(list_t **head, const char *str)
{
list_t* new_node;
char *dest;
new_node = (list_t*)malloc(sizeof(list_t));
if (new_node == NULL)
{
return(NULL);
}
dest = strdup(str);
new_node->str = dest;
new_node->next = *head;
*head = new_node;

return(*head);
}