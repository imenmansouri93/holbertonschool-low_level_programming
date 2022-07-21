#include "lists.h"
/**
 * @brief 
 * 
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *newNode;
dlistint_t *last = *head;
newNode = malloc(sizeof(dlistint_t));
if (newNode == NULL)
{
return(NULL);
}
newNode->n = n;
newNode->next = NULL;
if (*head == NULL)
{
newNode->prev = NULL;
*head = newNode;
return(0);
}
while (last->next != NULL)
last = last->next;
last->next = newNode;
newNode->prev = last;
return (newNode);
}