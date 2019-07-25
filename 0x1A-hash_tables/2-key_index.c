#include "hash_tables.h"

/**
 * key_index - obtain hash index of a key using the djb2 algorithm
 * @key: string key to search
 * @size: size of hash table being searched
 *
 * Return: index of key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
