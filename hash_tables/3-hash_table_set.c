#include "hash_tables.h"
#include <stdlib.h>
/**
 * @brief 
 * 
 */
hash_node_t *new_t_node(char *key, char *value)
{
node_pointer new_node;
new_node = malloc(sizeof(hash_node_t));
if(new_node == NULL)
{
return (NULL);
}
new_node->key = key;
new_node->value = value;
new_node->next = 0;
return (new_node);
}
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
node_pointer  head, tmp, new_node;
char_pointer val, ky;
unsigned long int map;
if (strlen(key) == 0 || key == NULL || !ht)
{
return (0);
}
val = strdup(value);
ky = strdup(key);
map = key_index((unsigned char *)key, ht->size);
head  = ht->array[map];
tmp = head;
if (head == NULL)
{
new_node = new_t_node(ky, val);
if(new_node == NULL)
return (0);
ht->array[map] = new_node;
return (1);
}
while (tmp)
{
if (strcmp(tmp->key, ky)  == 1)
{
tmp->value = val;
return (1);
}
tmp = tmp->next;
}
new_node =new_t_node(ky, val);
if(new_node == NULL)
return (0);
new_node->next = head;
head = new_node;
return (1);
}