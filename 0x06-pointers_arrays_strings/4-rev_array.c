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

	c = 0;
	for (i = (n - 1); i >= 0; i--)
	{
		temp = a[c];
		a[c] = a[i];
		a[i] = temp;
		c++;
	}
}
