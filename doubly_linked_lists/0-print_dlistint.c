#include "lists.h"
/**
 * @brief 
 * 
 */
size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *current;
unsigned int i = 0;
current = h;
if (h == NULL)
{
return(0);
}
for ( i = 0; current !=  NULL; i++)
{
while (current != NULL)
{
printf("%d\n", current->n);
current = current->next;
}
while (current != NULL)
{
printf("%d", current->n);
current = current->prev;
}
}
return(i);
}