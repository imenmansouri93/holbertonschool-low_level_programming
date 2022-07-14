#include "lists.h"
/**
 * @brief 
 * 
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