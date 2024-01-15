#include <stdlib.h>

/**
 * rand - manipulate rand function.
 *
 * Return: chosen winning numbers.
 */
int rand(void)
{
	static int i = 0;
	int numbers[6] = {9, 8, 10, 24, 75, 9};

	return numbers[i++];
}
