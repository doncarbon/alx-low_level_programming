#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line.
 * @s: string to be printed
 */
void _puts_recursion(char *s)
{
	if (strlen == 0)
		return (0);
	_putchar(s[0]);
	_puts_recursion(s + 1);
}
