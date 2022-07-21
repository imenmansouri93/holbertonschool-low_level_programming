#include "lists.h"
/**
 * print_dlistint - function that prints all the elements of a list.
 * @h: pointer to the start of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
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
printf("%d\n", h->n);
h = h->next;
}
}
return (node);
}
