#include "main.h"

/**
 * create_file - create a file
 * @filename: name of file to create
 * @text_content: content to be put into the file
 * Return: 1 on sucess and -1 on faliure
 */
int create_file(const char *filename, char *text_content)
{
	int c, w;

	if (filename == NULL)
		return (-1);

	c = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (text_content != NULL)
		w = write(c, text_content, strlen(text_content));

	if (c == -1 || w == -1)
		return (-1);

	return (1);
}
