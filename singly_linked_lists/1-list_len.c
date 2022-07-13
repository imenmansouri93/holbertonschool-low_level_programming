#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to the start of the list
 * Return: number of nodes in the list
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