#include <stdio.h>

/**
 * main - check the code
 *
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
printf("Fizz ");
}
else if (b == 0 && a != 0)
{
printf("Buzz ");
}
else if (a == 0 && b == 0)
{
printf("FizzBuzz ");
}
else
{
printf("%d ", i);
}
}
printf("\n");
return (0);
}
