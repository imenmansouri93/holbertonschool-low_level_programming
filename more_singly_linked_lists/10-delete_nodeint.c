#include "lists.h"
/**
 * @brief 
 * 
 * 
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int count = 1;
listint_t *new = *head, *tmp;
if (!head || !*head)
return(-1);
if (index == 0)
{
*head = new->next;
free(new);
return(1);
}
tmp = *head;
while (tmp)
{
if (count == index)
{
new = tmp->next;
tmp->next = new->next;
free(new);
return(1);
}
tmp = tmp->next;
count++;
}
return(-1);
}