#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: string provided
 * Return: Always 0.
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		printf("%c", *s);
		s++;
	}
	printf("\n");
}
