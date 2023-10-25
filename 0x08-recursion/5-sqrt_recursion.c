#include "main.h"

int _sqrt_help(int num, int square);

/**
 * _sqrt_help - recurses to find the natural square root of a number
 * @num: number to calculate the sqaure root of
 * @square: iterator
 *
 * Return: the resulting square root
 */
int _sqrt_help(int num, int square)
{
	if ((square * square) > num)
	{
		return (-1);
	}
	else if ((square * square) == num)
	{
		return (square);
	}
	else
	{
		return (_sqrt_help(num, square + 1));
	}
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: number to use
 * Return: square root of a num, -1 if n doesn't have it
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_help(n, 0));
}
