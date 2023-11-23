#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointing to a string of 0 and 1 chars
 *
 * Return: converted int
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int index = 0, uint = 0, len = 0;

	if (b == NULL)
		return (0);

	while (b)
	{
		if (b[len] != '0' || b[len] != '1')
			return (0);
		else
			len++;
	}
	
	for ( ; len >= 0; len--)
	{
		if (b[len] = '0')
		{
			index++;
		}
		else
		{
			uint += 2^index;
			index++;
		}
	}

	return (uint);
}
