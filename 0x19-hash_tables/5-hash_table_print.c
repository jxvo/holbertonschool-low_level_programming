#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: HashTable to print
 *
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned int idx;

	if (!ht || !ht->array)
		return;
	node = ht->array[0];
	putchar('{');
	for (idx = 0; idx < ht->size; idx++)
	{
		node = ht->array[idx];
		while (node)
		{
			if (idx < ht->size - 1)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			node = node->next;
		}
	}
	printf("}\n");
}
