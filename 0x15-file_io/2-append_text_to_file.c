#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file
 * @text_content: text to append at the eof
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o;
	ssize_t w;
	size_t len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);

	o = open(filename, O_APPEND | O_WRONLY);
	if (o == -1)
		return (-1);

	while (text_content[len] != '\0')
		len++;

	w = write(o, text_content, len);
	if (w == -1)
	{
		close(o);
		return (-1);
	}

	close(o);

	return (1);
}
