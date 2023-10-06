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
if (alphabet != 'e' & alphabet != 'q')
{
putchar(alphabet);
alphabet++;
}
else
{
alphabet++;
}
}
putchar('\n');
return (0);
}
