#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: the number
 */
void print_diagonal(int n)
{
int i;

for (i = 0; i < n; i++)
{
_putchar(i * ' ' + "\\");
_putchar('\n');
}

_putchar('\n');
}
