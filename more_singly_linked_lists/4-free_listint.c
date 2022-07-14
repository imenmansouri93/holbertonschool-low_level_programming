#include "lists.h"
/**
 * @brief 
 * 
 */
void free_listint(listint_t *head)
{
listint_t *destroy = head;
while (head)
{
head = head->next;
free(destroy);
destroy = head;
}
head = NULL;
}