#include "hash_tables.h"
#include <stdlib.h>
/**
 * @brief 
 * 
 */
void hash_table_print(const hash_table_t *ht)
{
node_pointer node;
unsigned long int index, c = 0, i = 0;

if (ht == NULL)
{
return;
}
printf("{");
for (index = 0; index < ht->size; index++)
{
node = ht->array[index];
while (node)
{
c++;
node = node->next;
printf("'%s': '%s'", node->key, node->value);
if (i < c -1)
printf(", ");
i++;
node =  node->next;
}
}
printf("}\n");
}
