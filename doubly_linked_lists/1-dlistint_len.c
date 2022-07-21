#include "lists.h"
/**
 * @brief 
 * 
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t node = 0;
if (h == NULL)
{
return (0);
}
else
while (h)
{
{
node++;
h = h->next;
}
}
return (node);
}