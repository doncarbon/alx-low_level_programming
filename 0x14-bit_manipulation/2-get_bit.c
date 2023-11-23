#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number
 * @index: the given index
 *
 * Return: value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	char *bits;
	int i, bit;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	bits = malloc(index + 1);
	if (bits == NULL)
		return (-1);

	bits[index + 1] = '\0';

	for (i = index; i >= 0; i--)
	{
		if ((n >> i) & 1)
			bits[i] = '1';
		else
			bits[i] = '0';
	}

	bit = bits[index] - '0';
	free(bits);

	return (bit);
}
