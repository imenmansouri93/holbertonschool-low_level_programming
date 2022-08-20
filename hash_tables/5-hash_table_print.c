#include "hash_tables.h"
#include <stdlib.h>
/**
 * @brief 
 * 
 */
void hash_table_print(const hash_table_t *ht)
{
node_pointer address;
unsigned long int index, c = 0, i = 0;
if (ht == NULL)
return (NULL);
for (index = 0; index < ht->size; index++)
{
address = ht->array[index];
while (address)
{
c++;
address = address->next;
}
}
printf("{");
for (index = 0; index < ht->size; index++)
{
address = ht->array[index];
while (address)
{
printf("'%s': '%s'", address->key, address->value);
if (i < c -1)
printf(", ");
i++;
address =  address->next;
}
}
printf("}\n");
}
