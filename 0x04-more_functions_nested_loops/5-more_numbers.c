#include <stdio.h>
#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * followed by a new line.
 * Return: 0 always success
 */
void more_numbers(void)
{
int i, t;

for (t = 0; t < 10; t++)
{
for (i = 0; i < 15; i++)
{
_putchar(i + '0');
}
_putchar('\n');
}
_putchar('\n');
}
