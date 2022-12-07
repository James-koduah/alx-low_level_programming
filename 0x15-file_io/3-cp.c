#include "main.h"



int main(int ac, char *av[])
{

	int f1_open, f1_read;
	int f2_open, f2_write;
	char *buf;


	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
		return (-1);
	if (ac != 3)
	{
		printf("Usage: cp file_from file_to\n");
		exit(97);
	}


	f1_open = open(av[1], O_RDONLY);
	if (f1_open == -1)
	{
		printf("Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	f2_open = open(av[2], O_RDWR | O_CREAT | O_TRUNC, 0664);
	if (f2_open == -1)
	{
		printf("Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	f1_read = 1;
	while (f1_read > 0)
	{
		f1_read = read(f1_open, buf, 1023);
		f2_write = write(f2_open, buf, f1_read);
		if (f2_write == -1)
			return (-1);
	}

	free(buf);
	return (0);
}
