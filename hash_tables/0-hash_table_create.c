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
table->size = size;
if (table == NULL)
{
return (NULL);
}
table->array = (hash_node_t **)calloc(table->size, sizeof(hash_node_t *));
for (i = 0; i < table->size; i++)
table->array[i] =  NULL;
return (table);
}
