#include "lists.h"
/**
 * @brief 
 * 
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new_node;
listint_t *tail;
new_node = (listint_t *)malloc(sizeof(listint_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
}
else
{
tail = *head;
while (1)
{
if (tail->next == NULL)
{
tail->next = new_node;
break;
}
tail = tail->next;
}
}
return (new_node);
}
