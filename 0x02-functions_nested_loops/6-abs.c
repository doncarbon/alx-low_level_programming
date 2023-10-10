#include <stdio.h>
#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n - number to check
 * Return: n if positive, -n if negative
 */

int _abs(int);
int _abs(int n)
{
if (n >= 0)
{
return (n);
}
else
{
return (-n);
}
}
