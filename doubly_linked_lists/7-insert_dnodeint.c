#include "lists.h"
/**
 * @brief 
 * 
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t  *new_node, *copy = *h;
unsigned int node;
new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;
if (idx == 0)
{
new_node->next = copy;
*h = new_node;
return (new_node);
}
for (node = 0; node < (idx - 1); node++)
{
if (copy == NULL || copy->next == NULL)
return (NULL);
copy = copy->next;
}
new_node->next = copy->next;
copy->next = new_node;
return (new_node);
}
