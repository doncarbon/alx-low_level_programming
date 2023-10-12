#include <stdio.h>
#include "main.h"

/**
 * print_square - prints a square, followed by a new line.
 * @size: size of the square
 */
void print_square(int size)
{
int i, t;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < size; i++)
{
for (t = 0; t < size; t++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
