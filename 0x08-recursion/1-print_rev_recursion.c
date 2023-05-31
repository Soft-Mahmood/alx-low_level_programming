#include "main.h"

/**
 * 1-print_rev_recursion - prints a string s in reverse,
 * followed by a new line
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

