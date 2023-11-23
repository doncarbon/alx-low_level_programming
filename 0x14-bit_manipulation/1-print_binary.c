#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: the number
 *
 * Return: the binary representation of n
 */
void print_binary(unsigned long int n)
{
	unsigned long int index;
	int count;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (index = n, count = 0; (index >>= 1) > 0; count++)
		;

	for (; count >= 0; count--)
	{
		if ((n >> count) & 1)
			printf("1");
		else
			printf("0");
	}	
}
