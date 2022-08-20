#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: hash table
 * @key: key
 * Return: value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int i = 0;
hash_node_t *temp;
if (ht == NULL)
return (NULL);
i = key_index((unsigned char *)key, ht->size);
temp = ht->array[i];
while (temp)
{
if (strcmp(temp->key, key) == 0)
{
return (temp->value);
}
temp = temp->next;
}
if (!temp)
{
return (NULL);
}
return (NULL);
}
