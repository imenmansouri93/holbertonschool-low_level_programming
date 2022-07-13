#include "lists.h"
/**
 * free_list - free list
 * @head: pointer to the start of the list
 * Return: nothing
 */
void free_list(list_t *head)
{
list_t *new_node;
while (head != NULL)
{
new_node = head;
head = new_node->next;
free(head);
}
}
