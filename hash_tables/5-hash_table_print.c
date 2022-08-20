#include "hash_tables.h"
#include <stdlib.h>
/**
 * @brief 
 * 
 */
void hash_table_print(const hash_table_t *ht)
{
node_pointer node;
unsigned long int index;
char  *separator;
if (ht == NULL)
{
return;
}
printf("{");
separator = "";
for (index = 0; index < ht->size; index++)
{
node = ht->array[index];
while (node)
{
printf("%s'%s': '%s'", separator, node->key, node->value);
separator =", ";
node = node->next;
}
}
printf("}\n");
}
