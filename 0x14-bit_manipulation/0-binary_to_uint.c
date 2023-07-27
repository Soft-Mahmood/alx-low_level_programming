#include "main.h"

/**
 * binary_to_unit - converts a binary number to
 * unsigned int.
 * @b: points to a string of 0s & 1s
 * Return: the converted number or
 * 0 if one or more charsacters in the string  is not a 0 or a 1
 * also returns 0 is b is null
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[i] - '0');
	}

	return (dec_val);
}
