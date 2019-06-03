/**
 * hash_djb2 - converts a string into a hash index using it's ascii values
 * @str: string to convert
 *
 * Return: unsigned long index
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int c;

	while ((c = *str++))
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	return (hash);
}
