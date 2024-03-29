#include "main.h"

/**
 * get_bit - returns the value of a bit
 * @index: is the index
 * @n: is the value
 * Return: the value of the bit
 * returns -1 incase of an error.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
