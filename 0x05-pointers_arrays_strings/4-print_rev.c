#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string provided
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	for (int i = len - 1; i >= 0; i++)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
