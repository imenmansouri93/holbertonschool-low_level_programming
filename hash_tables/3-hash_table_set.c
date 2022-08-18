#include "hash_tables.h"
#include <stdlib.h>
/**
 * @brief 
 * 
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
ht = (hash_node_t*)malloc(sizeof(hash_node_t ));
ht-> key = (char*)malloc (strlen(key) + 1);
ht-> value = (char*)malloc (strlen(value) + 1);
strcpy(ht->key, key);
}