<<<<<<< HEAD
#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: string to print
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
=======
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
>>>>>>> master
}
