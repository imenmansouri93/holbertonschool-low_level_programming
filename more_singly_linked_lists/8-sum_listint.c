#include "lists.h"
/**
 * sum_listint - function that returns sum of all the data of a linked  list
 * @head: pointer to the start of the list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
int sum = 0;
while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
