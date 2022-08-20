#include "hash_tables.h"
#include <stdlib.h>
/**
 * @brief 
 * 
 */
void hash_table_delete(hash_table_t *ht)
{
hash_node_t *node;
hash_node_t *q;
if(ht){
if (ht->array)
{
unsigned long int i = 0;
for (i = 0; i < ht->size; i++)
{
node = ht->array[i];
q =  NULL;
while (node)
{
q = node->next;
free(node);
node = q;
}
}
free(ht->array);
ht->array = NULL;
}
free(ht);
}
}