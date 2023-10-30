#include "main.h"

/**
 * read_textfile - Reads a text file and writes its contents to
 * the POSIX standard output.
 *
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed,
 * 0 if the file could not be opened or read, or if the filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes_read = 0, bytes_written = 0;
	FILE *file;
	char *buffer = malloc(letters);

	if (filename == NULL || buffer == NULL)
		return (0);

	file = fopen(filename, "r");

	if (file == NULL)
		return (0);
	bytes_read = fread(buffer, 1, letters, file);

	if (bytes_read == 0)
	{
		free(buffer);
		fclose(file);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	if (bytes_written != bytes_read)
		return (0);


	free(buffer);
	fclose(file);

	return (bytes_written);
}
