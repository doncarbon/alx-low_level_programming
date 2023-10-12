#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checks for digits 0 through 9
 * @c: the int to check
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
return (c >= '0' && c <= '9');
}
