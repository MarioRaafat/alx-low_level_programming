#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
		hash_table_t* arr = malloc(sizeof(hash_table_t));

	arr->size = size;
	arr->array = malloc(sizeof(hash_node_t *) * size);
	if (arr->array == NULL)
		return (NULL);

	return arr;
}
