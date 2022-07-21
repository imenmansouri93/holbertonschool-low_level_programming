#include "lists.h"
/**
 * add_dnodeint_end - function that adds a new node at the end of list.
 * @head: pointer to pointer the start of the list
 * @n: data
 * Return: the adress of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *newNode;
dlistint_t *last = *head;
newNode = malloc(sizeof(dlistint_t));
if (newNode == NULL)
{
return (NULL);
}
newNode->n = n;
newNode->next = NULL;
if (*head == NULL)
{
newNode->prev = NULL;
*head = newNode;
return (newNode);
}
while (last->next != NULL)
last = last->next;
last->next = newNode;
newNode->prev = last;
return (newNode);
}
