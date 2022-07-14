#include "lists.h"
/**
 * listint_len - function returns the number of elements in a linked list.
 * @h: pointer to the start of the list
 * Return: the number of elements in a linked list.
 */
size_t listint_len(const listint_t *h)
{
int count = 0;
const listint_t *current = h;
while (current != 0)
{
current = current->next;
count++;
}
return (count);
}
