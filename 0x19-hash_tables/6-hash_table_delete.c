#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: pointer to hash table
 *
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx;

	if (!ht)
		return;
	for (idx = 0; idx < ht->size; idx++)
	{
		while(ht->array[idx])
		{
			free(ht->array[idx]->value);
			free(ht->array[idx]->key);
			free(ht->array[idx]);
			ht->array[idx] = ht->array[idx]->next;
		}
	}
	free(ht->array);;
	free(ht);
}
