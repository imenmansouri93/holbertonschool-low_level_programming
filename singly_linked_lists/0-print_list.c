#include "lists.h"
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */


size_t print_list(const list_t *h)
{
    const list_t *tmp;
    unsigned int i;
    tmp = h;
    for (i = 0; tmp != NULL; i++)
    {
    if  (tmp-> str == NULL)
    printf("[0](nil)\n");
    else
    printf("[%u]%s\n", tmp->len, tmp->str);
    tmp = tmp->next;
    }
    return(i);
}