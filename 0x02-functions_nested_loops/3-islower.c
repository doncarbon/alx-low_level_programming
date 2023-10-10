#include <stdio.h>
#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: the character to check
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
if (c > 32)
{
return (1);
}
else
{
return (0);
}
}
