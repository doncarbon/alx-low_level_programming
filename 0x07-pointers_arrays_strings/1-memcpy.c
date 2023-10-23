#include "main.h"

/**
 * *_memset - fills memory with a constant byte
 * @dest: destination string
 * @src: source string
 * @n: number of times
 *
 * Return: pointer to the memory area s
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
