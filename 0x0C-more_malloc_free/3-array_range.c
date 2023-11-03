#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
 */
int *array_range(int min, int max)
{
	int *pt;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	pt = malloc(sizeof(int) * size);

	if (pt == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
	{
		pt[i] = min;
		i++;
	}

	pt[i] = '\0';

	return (pt);
}
