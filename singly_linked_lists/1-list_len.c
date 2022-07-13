#include "lists.h"
/**
 * list_len - function returns the number of elements in a linked list.
 * @h: pointer to the start of the list
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
int count = 0;
const list_t *current = h;
while (current != 0)
{
current = current->next;
count++;
}
return (count);
}
