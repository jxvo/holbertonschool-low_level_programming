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
	unsigned int idx, io = 0;

	if (!ht)
		return;
	node = ht->array[0];
	putchar('{');
	for (idx = 0; idx < ht->size; idx++)
	{
		node = ht->array[idx];
		while (node)
		{
			if (io == 1)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			io = 1;
			node = node->next;
		}
	}
	puts("}");
}
