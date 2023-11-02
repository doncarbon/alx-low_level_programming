#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - allocates memory using malloc.
 *
 * Return: a pointer to the allocated memory or
 * an exit status of 98 in case of failure
 */
void *malloc_checked(unsigned int b)
{
	int *pt;

	pt = (int *)malloc(b);

	if (pt = NULL)
		exit (98);
	return (pt);
}
