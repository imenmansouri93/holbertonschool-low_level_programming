#include "lists.h"
/**
 * @brief
 * 
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *newNode = malloc(sizeof(dlistint_t));
if (newNode == NULL)
{
return(NULL);
}
else
newNode->n = n;
newNode->next = *head;
*head =  newNode;
return(newNode);
}