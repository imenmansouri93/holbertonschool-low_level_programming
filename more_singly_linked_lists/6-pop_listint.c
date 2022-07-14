#include "lists.h"
/**
 * @brief 
 * 
 */
int pop_listint(listint_t **head)
{
int success ;
while (*head != NULL)
{
head = &(*head)->next;
}
success = *head != NULL;
if (success)
{
listint_t *current = *head;
*head = (*head)->next;
free(current);
}
return(success);
}