#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_print - function that prints a hash table.
 * @ht: hash table
 * Return: Nothing
 */
void hash_table_print(const hash_table_t *ht)
{
hash_node_t *node;
unsigned long int index = 0;
int flag = 0;
if (!ht)
{
return;
}
printf("{");
for (index = 0; index < ht->size; index++)
{
node = ht->array[index];
while (node != NULL)
{
if (flag == 0)
{
printf("'%s': '%s'", node->key, node->value);
flag = 1;
}
else
printf(", '%s': '%s'", node->key, node->value);
node = node->next;
}
}
printf("}\n");
}
