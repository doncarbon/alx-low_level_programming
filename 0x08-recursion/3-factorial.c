#include "main.h"

/**
 * _strlen_recursion - returns the factorial of a given number.
 * @n: number
 * 
 * Return: Factorial of a number, return -1 if n < 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n = 0)
		return (1);
	return (n * factorial(n - 1);
}
