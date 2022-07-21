#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node of a linked list.
 * @head: pointer to the start of the list
 * @index: the index of the node.
 * Return: NULL if node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int count  = 0;
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
