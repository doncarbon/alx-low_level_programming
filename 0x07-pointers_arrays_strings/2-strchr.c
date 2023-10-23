#include "main.h"

/**
 * *_strchr - locates a character in a string.
 * @s: memory area to be checked
 * @c: char to check
 *
 * Return: pointer to the memory area s
 */
char *_strchr(char *s, char c);
{
	int len, i, fo;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		if (s[i] = c)
		{
			fo = i;
			break;
		}
	}
	while (fo < len)
	{
		temp[t] = s[fo];
		t++;
		fo++;
	}
	return (temp);
}
