#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_delete - delete hash table
 * @ht: hash table
 * Return: Nothing
 */
void hash_table_delete(hash_table_t *ht)
{
unsigned int index = 0;
hash_node_t *node1 = NULL;
hash_node_t *node2 = NULL;
if (!ht)
return;
for (index = 0; index < ht->size; index++)
{
node1 = ht->array[index];
while (node1 != NULL)
{
node2 = node1->next;
free(node1->key);
free(node1->value);
free(node1);
node1 = node2;
}
}
free(ht->array);
free(ht);
}
