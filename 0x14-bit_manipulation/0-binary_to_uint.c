#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: converted int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int index = 0, uint = 0;
	int len = 0;

	if (b == NULL)
		return (0);

	while (b)
	{
		if (b[len] != '0' || b[len] != '1')
		{
			return (0);
		}
		else
		{
			len++;
		}
	}

	for (index = 1, uint = 0, len--; len >= 0; len--, index *= 2)
	{
		if (b[len] == '1')
			uint += index;
	}

	return (uint);
}
