#include <stdio.h>

/**
 * main - prints the alphabets in lowercase
 * Return: Always 0 (Success)
 */

int main(void)
{
char alphabet;
char uprab;
alphabet = 'a';
uprab = 'A';
while (alphabet <= 'z')
{
putchar(alphabet);
alphabet++;
}
while (uprab <= 'Z')
{
putchar(uprab);
uprab++;
}
putchar('\n');
return (0);
}
