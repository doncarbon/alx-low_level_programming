#include <stdio.h>
#include "main.h"

/**
 * print_sign - checks for alphabetic character
 * @n: the number to be checked
 * Return: 1 if n is positive, 0 if n is zero, -1 if n is negative
 */

int print_sign(int n);
int print_sign(int n)
{
if (n > 0)
{
printf("+");
return (1);
}
else if (n == 0)
{
printf("0");
return (0);
}
else
{
printf("-");
return (-1);
}
}
