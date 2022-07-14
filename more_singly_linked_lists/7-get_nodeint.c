#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of a linked list.
 * @head: pointer to the start of list
 * @index: unsignedint
 * Return: ...
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *current = head;
unsigned int count = 0;
if (head == NULL)
{
return (NULL);
}
while (current != NULL)
{
if (count == index)
return (current);
count++;
current = current->next;
}
assert(0);
}
