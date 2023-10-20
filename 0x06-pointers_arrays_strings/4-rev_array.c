#include <stdio.h>
#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array
 * @n: number of elements
 *
 * Return: 0 always success
 */
void reverse_array(int *a, int n)
{
	int temp;
	int c;
	int i;

	i = n - 1;
	for (c = 0; c < n / 2; c++)
	{
		temp = a[c];
		a[c] = a[i];
		a[i--] = temp;
	}
}
