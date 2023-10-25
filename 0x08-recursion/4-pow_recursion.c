#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x: number
 * @y: power
 * Return: Value of x**p, -1 if y < 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (0);
	return (x * _pow_recursion(x, y - 1));
}
