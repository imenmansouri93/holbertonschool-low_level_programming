#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_create - function that create a hash table
 * @size: size of the array
 * Return: hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
unsigned long int i;
hash_table_t *table = (hash_table_t *)malloc(sizeof(hash_table_t));
if (table == NULL)
{
return (NULL);
}
table->array = malloc(size * sizeof(hash_node_t *));
if (table->array == NULL)
{
return (NULL);
}
for (i = 0; i < table->size; i++)
table->array[i] =  NULL;
table->size = size;
return (table);
}
