#include "main.h"


/**
 * errors - Manages similar errors from open(), read(), write()
 * @file_descriptor: the file descriptor
 * @type: the type of error. It lets us know which message to print
 * @file_name: either the first or second file
 * @buf: don't worry
 * Return: void
 */
void errors(int file_descriptor, char type, char *file_name, char *buf)
{
	if (file_descriptor == -1 && type == 'r')
	{
		free(buf);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_name);
		exit(98);
	}

	if (file_descriptor == -1 && type == 'w')
	{
		free(buf);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_name);
		exit(99);
	}
}



/**
 * close_errors - closing errors
 * @file_descriptor: fd
 * Return: noting
 */

void close_errors(int file_descriptor)
{
	int i;

	i = close(file_descriptor);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_descriptor);
		exit(100);
	}
}
/**
 * main - copy form one file into another
 * @ac: number of arguments given to the exec
 * @av: strings of arguments
 * Return: things
 */

int main(int ac, char *av[])
{
	int f1_open, f1_read;
	int f2_open, f2_write;
	char *buf;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}


	f1_open = open(av[1], O_RDONLY);
	errors(f1_open, 'r', av[1], buf);

	f2_open = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	f1_read = 1;
	while (f1_read > 0)
	{
		f1_read = read(f1_open, buf, 1024);
		errors(f1_read, 'r', av[1], buf);
		f2_write = write(f2_open, buf, f1_read);
	}

	errors(f2_open, 'w', av[2], buf);
	errors(f2_write, 'w', av[2], buf);
	free(buf);

	close_errors(f1_open);
	close_errors(f2_open);
	return (0);
}
