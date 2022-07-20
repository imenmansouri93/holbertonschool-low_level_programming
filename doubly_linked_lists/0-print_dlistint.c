#include "lists.h"
/**
 * @brief 
 * 
 */
size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *current;
current = h;
if (h == NULL)
{
return(0);
}

while (current->next != NULL) {
    current = current->next; 
  }

  while (current != NULL) {
    printf("%d\n", current->n);
    current = current->prev;
  }

return(1);
}