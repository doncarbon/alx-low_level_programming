#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes
 * it with a specific char.
 * @c: the char to initialise it
 * @size: the size of the memory to print
 *
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *pt;

	pt = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}
	pt[0] = c;
	return (char *pt);
}
