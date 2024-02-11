#include "hash_tables.h"

/**
 * hash_table_set - sets a key to a value in the hash table
 * @ht: hash table to add elemt to
 * @key: key for the data
 * @value: data to store
 *
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t* ht, const char* key, const char* value)
{
	unsigned long int index;
	hash_node_t* hash_node, *temp;
	//char* new_value;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
		key == NULL || strlen(key) == 0 || value == NULL)
		return (0);

	index = key_index(key, ht->size);
	temp = ht->array[index];

	if (temp)
	{
		for (int i = 0; temp; i++)
		{
			if (temp->key == key)
				return 1;
			else
				temp = temp->next;
		}
	}
	else
		return 0;
	hash_node->key = strdup(key);
	hash_node->value = strdup(value);

	hash_node->next = ht->array[index];
	ht->array[index] = hash_node;

	return 1;
}
