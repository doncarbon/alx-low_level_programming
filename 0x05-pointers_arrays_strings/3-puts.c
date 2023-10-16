#include "main.h"
#include <stdio.h>

/**
 * _strlen - prints a string, followed by a new line, to stdout.
 * @str: string provided
 * Return: Always 0.
 */
 void _puts(char *str)
{
	while (*str != '\n')
	{
		printf("%c", *str);
		str++;
	}
	printf("\n");
}
