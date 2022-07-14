#include "lists.h"
/**
 * print_listint - function that print all the elements
 * @h: pointer to the start of the list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
const listint_t *tmp;
unsigned int i;
tmp = h;
for (i = 0; tmp != NULL; i++)
{
if (tmp->n == 0)
printf("0\n");
else
printf("%i\n", tmp->n);
tmp = tmp->next;
}
return (i);
}
