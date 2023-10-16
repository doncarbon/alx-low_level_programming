#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string.
 * @s: string provided
 * Return: Always 0.
 */
void rev_string(char *s)
{
	char tmp;
	int i, len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[(len - 1)];
		s[(len - 1)--] = tmp;
	}
}
