#include "hash_tables.h"
#include <stdlib.h>
/**
 * @file 0-hash_table_create.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-08-17
 * 
 * @copyright Copyright (c) 2022
 * 
 */

hash_table_t *hash_table_create(unsigned long int size)
{
unsigned long int i;
hash_table_t* table = (hash_table_t*)malloc (sizeof(hash_table_t));
table->size = size;
table->array = (hash_node_t**) calloc (table->size, sizeof(hash_node_t *));
for(i = 0; i < table->size; i++)
table->array[i] =  NULL;
return(table);
}