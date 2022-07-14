#include "lists.h"
/**
 * free_list - free list
 * @head: pointer to the start of the list
 * Return: nothing
 */
void free_list(list_t *head)
{
list_t *destroy = head;
while (head)
{
destroy = head;
head = head->next;
free(destroy->str);
free(destroy);
}
free(head);
}
