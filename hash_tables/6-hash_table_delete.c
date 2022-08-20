#include "hash_tables.h"
#include <stdlib.h>
/**
 * @brief 
 * 
 */
void hash_table_delete(hash_table_t *ht)
{
unsigned long int index;
hash_node_t *node1;
hash_node_t *node2;
if(ht == NULL)
return;
for (index = 0; index < ht->size; index++)
{
node1 = ht->array[index];
while ((node1 = node2) != NULL)
{
node1 = node1->next;
free(node2->key);
free(node2->value);
free(node2);
}
}
free(ht->array);
free(ht);
}