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
	int len = 0, i, fo = -1;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		if (s[i] == c)
		{
			fo = i;
			break;
		}
	}

	if (fo == -1)
	{
		return (NULL);
	}

	return (&s[fo]);
}
