#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of elements
 * @size: size of the bytes
 *
 * Return: a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void **pt;

	if (nmemb == 0 || size == 0)
		return (NULL);

	*pt = malloc(nmemb);
	pt = malloc(size);

	if (!*pt)
		return (NULL);

	return (*pt);
}
