#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: string one
 * @s2: string two
 * @n: first n bytes of s2
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cs;
	unsigned int i = 0, j = 0;
	unsigned int len1 = 0, len2 = 0;
	unsigned int len = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n < len2)
	{
		len2 = n;
	}
	len = len1 + len2;

	cs = malloc(sizeof(char) * (len + 1));

	if (cs == NULL)
		return (NULL);

	if (s1)
	{
		while (i < len1)
		{
			cs[i] = s1[i];
			i++;
		}
	}

	if (s2)
	{
		while (i < len)
		{
			cs[i] = s2[j];
			i++;
			j++;
		}
	}
	cs[i] = '\0';

	return (cs);
}
