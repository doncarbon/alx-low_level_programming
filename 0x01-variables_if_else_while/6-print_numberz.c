#include <stdio.h>
/**
 * main - Prints all single digit numbers of base 10
 *
 * Return: always return Success (0)
 */
int main(void)
{
int n;
n = 0;

while (n < 10)
{
putchar(n);
n++;
}
putchar('\n');
return (0);
}
