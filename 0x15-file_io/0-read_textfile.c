#include "main.h"

/**
 * read_textfile - read a file to stdout
 * @filename: name of file
 * @letters: the number of letters it should read and print
 * Return:  actual number of letters it could read and print
 */
 
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r, w;
	char *p;


	if (filename == NULL)
		return (0);

	p = malloc(sizeof(char) * letters);
	if (p == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	r = read(fd, p, letters);
	w = write(STDOUT_FILENO, p, r);


	if (fd == -1 || r == -1 || w == -1)
	{
		free(p);
		return (0);
	}

	free(p);
	close(fd);

	return (w);

}

