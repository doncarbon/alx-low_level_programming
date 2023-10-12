#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100,followed by a new line
 * but for multiples of three prints Fizz instead of the number
 * and for the multiples of five prints Buzz
 * Return: Always 0.
 */
int main(void)
{
int a, b, i;

for (i = 1; i < 101; i++)
{
a = i % 3;
b = i % 5;
if (a == 0 && b != 0)
{
printf(" Fizz");
}
else if (b == 0 && a != 0)
{
printf(" Buzz");
}
else if (a == 0 && b == 0)
{
printf(" FizzBuzz");
}
else if (i == 1)
{
printf("%d", i);
}
else
{
printf(" %d", i);
}
}
printf("\n");

return (0);
}
