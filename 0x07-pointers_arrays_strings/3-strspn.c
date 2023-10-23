#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: memory area to be checked
 * @accept: char to check
 *
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int len = 0, is = 0, i, j;
	unsigned int counter = 0;

	while (accept[len] != '\0')
	{
		len++;
	}

	while (s[is] != ' ')
	{
		is++;
	}

	for (i = 0; i < len; i++)
	{
		for (j = 0; j < is; j++)
		{
			if (s[j] == accept[i])
			{
				counter++;
			}
		}
	}

	return (counter);
}
