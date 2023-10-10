#include <stdio.h>
#include "main.h"

/**
 * main - prints the alphabets in lowercase
 * Return: Always 0 (Success)
 */

void print_alphabet(void);

void print_alphabet(void)
{
char a;
for (a = 'a'; a <= 'z'; a++)
{
printf("%c", a);
}
}
