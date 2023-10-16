#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints n elements of an array of integers
 * followed by a new line.
 * @a: a provided
 * @n: number provided
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
    int i;
    for (i = 0; i <= n; i++)
    {
        printf("%d, ", array[i]);
    }
    printf("\n");
}
