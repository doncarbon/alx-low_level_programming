#include <stdio.h>

/**
 * main - prints the alphabets in lowercase
 * Return: Always 0 (Success)
 */

int main(void)
{
char alphabet;
alphabet = 'z';
while (alphabet >= 'a')
{
putchar(alphabet);
alphabet--;
}
putchar('\n');
return (0);
}
