#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: the number
 */

void print_diagonal(int n)
{
int i, t;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (i = 0; i < n; i++)
{
for (t = 0; t < n; t++)
{
if (t == i)
{
_putchar('\\');
}
else if (t < i)
{
_putchar(' ');
}
}
_putchar('\n');
}
}
}
