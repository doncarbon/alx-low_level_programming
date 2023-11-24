#include "main.h"

/**
 * flip_bits - Finds how many bits to flip between two numbers.
 * @n: number 1
 * @m: number 2
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int flip = 0;
	unsigned long int index = n ^ m;

	while (index > 0)
	{
		flip += index & 1;
		index >>= 1;
	}

	return (flip);
}
