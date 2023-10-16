#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character of a string
 * starting with the first character, followed by a new line.
 * @str: string provided
 * Return: Always 0.
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		printf("%c", *str);
		str++;
	}
	printf("\n");
}
