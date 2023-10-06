#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int n, m;

	for (n = 38; n <= 46; n++)
	{
		for (m = 39; m <= 47; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
				if (n != 46 || m != 47)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
