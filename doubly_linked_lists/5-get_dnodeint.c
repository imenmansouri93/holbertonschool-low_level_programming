#include "lists.h"
/**
 * @brief 
 * 
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