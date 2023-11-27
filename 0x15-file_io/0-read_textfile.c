#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file
 * @letters: number of letters
 *
 * Return: the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fileread, filewrite, fileopen;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fileopen = open(filename, 0_RDONLY);
	fileread = read(fileopen, buffer, letters);
	filewrite = write(STDOUT_FILENO, buffer, fileread);

	if (filewrite == -1 || fileopen == -1 || filewrite == -1 || filewrite != fileread)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fileopen);

	return (filewrite);
}
