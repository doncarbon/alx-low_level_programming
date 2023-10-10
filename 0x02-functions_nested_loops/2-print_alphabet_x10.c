#include <stdio.h>
#include "main.h"

/**
 * main - prints the alphabets in lowercase
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void);

void print_alphabet_x10(void)
{
char a;
int i;
for (i = 0; i < 10; i++)
{
for (a = 'a'; a <= 'z'; a++)
{
printf("%c", a);
}
}
}
