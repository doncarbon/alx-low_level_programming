#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string provided
 * Return: Always 0.
 */
void print_rev(char *s)
{
	char *rs;
	int i = 0;

	while (*s != '\0')
	{
		rs[i] = *s;
		rs[(i + 1)] = rs[(i + 2)];
	}
	while (*rs != '\0')
	{
		printf("%c", *rs);
		rs++;
	}
	printf("\n");
}
