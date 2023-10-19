#include "main.h"

/**
 * _strcmp - compares two strings.
 * @s1: string 1
 * @s2: string 2
 *
 * Return: comparaison
 */
int _strcmp(char *s1, char *s2);
{
int i = 0, j = 0;

while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] > s2[i])
{
j++;
}
else if (s1[i] > s2[i])
{
j--;
}
i++;
}

return (j);
}
