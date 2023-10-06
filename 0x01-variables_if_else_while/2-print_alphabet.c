#include <stdio.h>

/**
 * main - prints the alphabets in lowercase
 * Return: Always 0 (Success)
 */

int main(void)
{
char alphabet;
alphabet = 'a';
while (alphabet <= 'z')
{
putchar(alphabet);
alphabet++;
}
return (0);
}
