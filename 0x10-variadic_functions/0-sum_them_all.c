#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - the sum of all its parameters.
 * @n: first arg
 *
 * Return: Sum of all arguments, 0 if n = 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
		return (0);

	int i, sum;
	va_list ap;

	va_start(ap, n);
	sum = 0;
	for (i = 0; i < count; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);

	return (sum);
}
