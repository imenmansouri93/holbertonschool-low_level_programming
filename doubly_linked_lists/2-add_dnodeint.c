#include "lists.h"
/**
 * add_dnodeint - function that adds a new node at the beginning of a list.
 * @head: pointer to the start of the list
 * @n: data
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *newNode;
newNode = malloc(sizeof(dlistint_t));
if (newNode == NULL)
{
return (NULL);
}
newNode->n = n;
newNode->next = *head;
if (*head)
(*head)->prev = newNode;
*head =  newNode;
return (newNode);
}
