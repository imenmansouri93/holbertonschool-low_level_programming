#include "lists.h"
/**
 * @brief 
 * 
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *current = head;
unsigned int count = 0;
if (head == NULL)
{
return(NULL);
}

while (current != NULL)
{
if (count == index)
return(current);
count ++;
current = current->next;
}
assert(0);
}