#include "lists.h"
/**
 * @brief 
 * 
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t  *new_node, *copy = *h;
unsigned int node = 1;
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
while (node < (idx - 1) && copy != NULL)
{
copy = copy->next;
node++;
}
if (idx == 1)
{
dlistint_t *add_dnodeint(dlistint_t **h, const int n);
}
else if (copy == *h)
{
 dlistint_t *get_dnodeint_at_index(dlistint_t *h, unsigned int idx);
}
else if (copy != NULL)
{
new_node->n = n;
new_node->next = copy->next;
new_node->prev =  copy;
if (copy->next != NULL)
{
copy -> next->prev = new_node;
}
copy->next = new_node;
}
return (new_node);
}
