#include "hash_tables.h"

/**
 * update_existing_key - updates the value of an existing key
 * @node: pointer to the node to update
 * @value: new value
 *
 * Return: 1 if succeeded, 0 otherwise
 */
static int update_existing_key(hash_node_t *node, const char *value)
{
free(node->value);
node->value = strdup(value);
if (node->value == NULL)
return (0);
return (1);
}

/**
 * create_new_node - creates a new hash table node
 * @key: the key
 * @value: the value
 *
 * Return: pointer to new node, or NULL if failed
 */
static hash_node_t *create_new_node(const char *key, const char *value)
{
hash_node_t *new_node;

new_node = malloc(sizeof(hash_node_t));
if (new_node == NULL)
return (NULL);

new_node->key = strdup(key);
if (new_node->key == NULL)
{
free(new_node);
return (NULL);
}

new_node->value = strdup(value);
if (new_node->value == NULL)
{
free(new_node->key);
free(new_node);
return (NULL);
}

new_node->next = NULL;
return (new_node);
}

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to add or update the key/value to
 * @key: the key (cannot be empty string)
 * @value: value associated with the key
 *
 * Return: 1 if succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *current, *new_node;
unsigned long int index;

if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
return (0);

index = key_index((const unsigned char *)key, ht->size);

current = ht->array[index];
while (current != NULL)
{
if (strcmp(current->key, key) == 0)
return (update_existing_key(current, value));
current = current->next;
}

new_node = create_new_node(key, value);
if (new_node == NULL)
return (0);

new_node->next = ht->array[index];
ht->array[index] = new_node;

return (1);
}
