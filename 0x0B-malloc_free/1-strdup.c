#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given
 * as a parameter.
 * @str: the string to duplicate
 *
 * Return: a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */
char *_strdup(char *str)
{
	char *dp;
	unsigned int i = 0, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len])
	{
		len++;
	}

	dp = malloc(sizeof(char) * (len + 1));

	if (dp == NULL)
		return (NULL);

	while ((dp[i] = str[i]) != '\0')
	{
		i++;
	}

	return (dp);
}
