#include "main.h"

/**
 * create_file - creates a file.
 * @filename: the name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	FILE *file;

	if (filename == NULL)
		return (-1);

	file = fopen(filename, "rw");

	if (text_content != NULL)
		fprintf(file, "%s", text_content);

	return (0);
}
