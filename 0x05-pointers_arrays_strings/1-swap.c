#include "main.h"
#include <stdio.h>

/**
 * swap_int - swap 2 pointers value
 * @a: int 1
 * @b: int 2
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	*a = *b;
	*b = *a;
}
