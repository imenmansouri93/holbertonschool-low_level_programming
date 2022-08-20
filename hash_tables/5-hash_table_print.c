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
unsigned long int index;
char *separator;
if (ht == NULL)
{
return;
}
printf("{");
separator = "";
for (index = 0; index < ht->size; index++)
{
node = ht->array[index];
while (node != NULL)
{
printf("%s'%s': '%s'", separator, node->key, node->value);
separator = ", ";
node = node->next;
}
}
printf("}\n");
}
