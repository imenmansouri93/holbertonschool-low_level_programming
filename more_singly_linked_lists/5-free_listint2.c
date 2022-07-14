#include "lists.h"
/**
 * free_listint2 -  function that frees a list.
 * @head: pointer to the start of a pointer
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
listint_t *headPtr = *head;
listint_t *destroy = headPtr;
while (headPtr)
{
headPtr = headPtr->next;
free(destroy);
destroy = headPtr;
}
*head = NULL;
}
