#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * *_strchr - locates a character in a string.
 * @s: memory area to be checked
 * @c: char to check
 *
 * Return: pointer to the memory area s
 */
char *_strchr(char *s, char c)
{
	int a;

	while (1)
	{
		a = *s++;
		if (a == c)
		{
			return (s - 1);
		}
		if (a == 0)
		{
			return (NULL);
		}
	}
}
