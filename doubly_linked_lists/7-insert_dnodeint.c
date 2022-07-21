#include "lists.h"
/**
 * insert_dnodeint_at_index - 
 * 
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t  *new_node, *copy = *h;
unsigned int i = 0;
new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;
if ((copy->next == NULL)|| (copy == NULL && idx !=  0))
return (NULL);
if (idx == 0){
return(add_dnodeint(h, n));
}
while (copy != NULL)
{
if (idx == i)
{
new_node->prev = copy->prev;
new_node->next  = copy;
(copy->prev)->next = new_node;
copy->prev = new_node;
return(new_node);
}
if ((idx - 1) && copy->next == NULL)
{
return(add_dnodeint_end(h, n));
}
copy =  copy->next;
i++;
}
return(NULL);
}
