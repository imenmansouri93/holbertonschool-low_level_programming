#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of a linked list.
 * @head: pointer to the start of list
 * @index: unsignedint
 * Return: ...
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int count = 0;
if (head == NULL)
{
return (NULL);
}
while (head)
{
if (count == index)
return (head);
count++;
head = head->next;
}
return (NULL);
}
