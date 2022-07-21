#include "lists.h"
/**
 * 
 * 
 * 
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
unsigned int count = 1;
dlistint_t *new = *head, *tmp;
if (!*head)
return (-1);
if (index == 0)
{
*head = new->next;
free(new);
return (1);
}
tmp = *head;
while (tmp)
{
if (count == index)
{
new = tmp->next;
tmp->next = new->next;
free(new);
return (1);
}
tmp = tmp->next;
count++;
}
return (-1);
}


