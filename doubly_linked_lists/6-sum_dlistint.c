#include "lists.h"
/**
 * sum_dlistint -function that returns the sum of all the dataof a linked list.
 * @head: pointer to the start of the list
 * Return: sum of all tha data
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
while (head)
{
sum  += head->n;
head = head->next;
}
return (sum);
}
