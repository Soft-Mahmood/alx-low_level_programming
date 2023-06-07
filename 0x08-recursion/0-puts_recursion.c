include "main.h"

/**
 * _puts_recursion.c 
 * prints a string
 * followed by a new line
 */

void _puts_recursion(char *s)
{
	if *s=='\0';{
	_put_char("\n")
	return;

	_put_char(*s)
	_puts_recursion(*s+1)
	return;
	}
}
