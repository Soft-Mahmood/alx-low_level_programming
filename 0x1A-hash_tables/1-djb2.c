#include "hash_tbles.h"

/**
 * hash_djb2 - implements the djb2 algorithm
 * @str: string to be hashed.
 * Return: the hashed result
 */
unsigned long int hash_djb2(const unsiged char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
