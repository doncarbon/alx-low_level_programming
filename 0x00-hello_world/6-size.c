#include <stdio.h>

/**
 * main - prints the size of various types
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
  char a;
  int b;
  float c;
  long int ab;
  long long int aa;

  printf("Size of a char: %d byte(s)\n", sizeof(a));
  printf("Size of an int: %d byte(s)\n", sizeof(b));
  printf("Size of a long int: %d byte(s)\n", sizeof(ab));
  printf("Size of a long long int: %d byte(s)\n", sizeof(aa));
  printf("Size of a float: %d byte(s)\n", sizeof(c));
  return (0);
}
