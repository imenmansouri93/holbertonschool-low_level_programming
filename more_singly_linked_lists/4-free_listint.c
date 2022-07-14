#include "lists.h"
/**
 * free_listint - function that frees a list.
 * @head: pointer to the start of the list
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
listint_t *destroy = head;
while (head)
{
head = head->next;
free(destroy);
destroy = head;
}
head = NULL;
}
