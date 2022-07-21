#include "lists.h"
/**
 * @brief
 * 
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *newNode;
newNode = malloc(sizeof(dlistint_t));
if (head == NULL)
{
return(NULL);
}
if (newNode == NULL)
{
return(NULL);
}
newNode->n = n;
newNode->next = *head;
newNode->prev = NULL;
if (*head)
(*head)->prev = newNode;
*head =  newNode;
return(newNode);
}