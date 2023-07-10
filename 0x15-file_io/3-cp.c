#include "main.h"
#define BUFFER_SIZE 1024

/**
 * main - Copy the content of a file to another file.
 * @argc: The number of command line arguments.
 * @argv: An array of command line argument strings.
 *
 * Return: 0 on success, or the corresponding error code.
 */
int main(int argc, char *argv[])
{
	const char *file_from;
	const char *file_to;
	int fd_from;
	int fd_to;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
	{
		print_error_and_exit("Usage: cp file_from file_to\n", NULL, 97);
	}

	file_from = argv[1];
	file_to = argv[2];

	fd_from = open_file(file_from, O_RDONLY, 0);
	fd_to = open_file(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1)
		{
			print_error_and_exit("Error: Can't write to %s\n", file_to, 99);
		}
	}

	if (bytes_read == -1)
	{
		print_error_and_exit("Error: Can't read from file %s\n", file_from, 98);
	}
	close_file(fd_from);
	close_file(fd_to);

	if (chmod(file_to, 0664) == -1)
	{
		print_error_and_exit("Error: Can't set permissions for %s\n", file_to, 100);
	}

	return (0);
}

/**
 * open_file - Open a file and handle errors.
 * @filename: The name of the file to open.
 * @flags: The flags to use when opening the file.
 * @mode: The file permissions mode.
 *
 * Return: The file descriptor on success, or exit with an error message.
 */
int open_file(const char *filename, int flags, mode_t mode)
{
	int fd = open(filename, flags, mode);

	if (fd == -1)
	{
		print_error_and_exit("Error: Can't open file %s\n", filename, 98);
	}
	return (fd);
}

/**
 * close_file - Close a file and handle errors.
 * @fd: The file descriptor to close.
 *
 * Return: None.
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		print_error_and_exit("Error: Can't close fd %d\n", NULL, 100);
	}
}

/**
 * print_error_and_exit - Print an error message and exit.
 * @message: The error message format string.
 * @arg: The additional argument for the format string.
 * @exit_code: The exit code to use.
 *
 * Return: None.
 */
void print_error_and_exit(const char *message, const char *arg, int exit_code)
{
	dprintf(STDERR_FILENO, message, arg);
	exit(exit_code);
}
