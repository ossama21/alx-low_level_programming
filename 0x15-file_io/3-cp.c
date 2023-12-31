#include <stdio.h>
#include <stdlib.h>
#include "main.h"

#define BUFFER_SIZE 1024

/**
 * check_error - Print error messages and exit with an exit code.
 *
 * @error: The exit code or file descriptor for the error.
 * @fname: The name of the file related to the error (file_from or file_to).
 * @fd: The file descriptor related to the error.
 *
 * Return: Always returns 0 on success.
 */
int check_error(int error, char *fname, int fd)
{
	switch (error)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(97);
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", fname);
			exit(98);
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", fname);
			exit(99);
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			exit(100);
		default:
			return (0);
	}
}



/**
 * main - Copy the content of a file to another file.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 *
 * Return: Always returns 0.
 */
int main(int argc, char *argv[])
{
	char buffer[BUFFER_SIZE];
	int file_from, file_to;
	int bytes_read = 0, bytes_written = 0;
	int close_from, close_to;

	if (argc != 3)
		check_error(97, NULL, 0);

	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		check_error(98, argv[1], file_from);

	file_to  = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
		check_error(99, argv[2], file_to);

	while ((bytes_read = read(file_from, buffer, BUFFER_SIZE)) != 0)
	{
		if (bytes_read == -1)
			check_error(98, argv[1], file_from);

		bytes_written = write(file_to, buffer, bytes_read);
		if (bytes_written == -1)
			check_error(99, argv[2], file_to);

	}

	close_from = close(file_from);
	if (close_from == -1)
		check_error(100, argv[1], file_from);

	close_to = close(file_to);
	if (close_to == -1)
		check_error(100, argv[2], file_to);
	return (0);
}
