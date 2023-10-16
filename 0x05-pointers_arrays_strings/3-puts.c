#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: string provided
 * Return: Always 0.
 */
 void _puts(char *str)
{
	int i = 0;

	while (i < _strlen(str))
	{
		printf("%c", *str);
		str++;
	}
	printf("\n");
}
