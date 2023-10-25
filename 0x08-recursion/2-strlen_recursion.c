#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string to be checked
 */
int _strlen_recursion(char *s)
{
	if (s[0] == '\0')
		return (0);
	int len = 1;
	return (len  + _strlen_recursion(s + 1));
}
