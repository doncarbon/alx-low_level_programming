#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: string 1
 * @s2: string 2
 *
 * Return: a pointer to the concatenated string.
 * It returns NULL if insufficient memory was available
 */
char *str_concat(char *s1, char *s2)
{
	char *cs;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	cs = malloc(sizeof(char) * (len1 + len2 + 1));

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
		while (i < (len1 + len2))
		{
			cs[i] = s2[j];
			i++;
			j++;
		}
	}
	cs[i] = '\0';

	return (cs);
}
