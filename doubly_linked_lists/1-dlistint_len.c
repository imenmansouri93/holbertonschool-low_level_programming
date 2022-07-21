#include "lists.h"
/**
 * dlistint_len - function that returns the number of elements in a linked list
 * @h: pointer to the start of the list
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t node = 0;
if (h == NULL)
{
return (0);
}
else
while (h)
{
{
node++;
h = h->next;
}
}
return (node);
}
