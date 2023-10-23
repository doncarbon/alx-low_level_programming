#include "main.h"
#include <stddef.h>

/**
 * *_strpbrk - searches a string for any of a set of bytes.
 * @s: memory area to be checked
 * @accept: chars to check
 *
 * Return: a pointer to the byte in s that matches one of
 * the bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, l1 = 0, l2 = 0;

	while (accept[l1] != '\0')
	{
		l1++;
	}

	while (s[l2] != '\0')
	{
		l2++;
	}

	for (i = 0; i < l2; i++)
	{
		for (j = 0; j < l1; j++)
		{
			if (s[i] == accept[j])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
