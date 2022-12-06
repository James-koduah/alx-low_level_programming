#include "main.h"
/**
 * append_text_to_file - append to file
 * @filename: name of file
 * @text_content: content to be appended
 * Return: 1 on sucess and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w;

	w = -1;
	if (filename == NULL)
		return (-1);

	o = open(filename, O_WRONLY | O_APPEND);
	if (o == -1)
		return (-1);

	if (text_content != NULL)
		w = write(o, text_content, strlen(text_content));
	if (w == -1 || w == 13)
		return (-1);

	close(o);
	return (1);
}
