#include "lists.h"
/**
 * free_list - free list
 * @head: pointer to the start of the list
 * Return: nothing
 */
void free_list(list_t *head)
{
if (head == NULL)
{
return;
}
{
free_list(head->next);
free(head);
}
}
