#include "lists.h"
/**
 * free_list - free list
 * @head: pointer to the start of the list
 * Return: nothing
 */
void free_list(list_t *head)
{
list_t *tmp = NULL;
while (head != NULL)
{
tmp = head;
head = head->next;
free(tmp);
}
}
