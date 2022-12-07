#include "main.h"

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
	if (f1_open == -1)
	{
		free(buf);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	f2_open = open(av[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
	f1_read = 1;
	while (f1_read > 0)
	{
		f1_read = read(f1_open, buf, 1024);
		f2_write = write(f2_open, buf, f1_read);
	}

	if (f2_open == -1 || f2_write == -1)
	{
		free(buf);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	free(buf);
	f1_open = close(f1_open);
	f2_open = close(f2_open);
	if (f1_open == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f1_open);
		exit(100);
	}
	if (f2_open == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f2_open);
		exit(100);
	}
	return (0);
}

