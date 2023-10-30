#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: file name
 * @text_content: end of file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, f, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0;  text_content[len];)
			len++;
	}

	i = open(filename, O_WRONLY | O_APPEND);
	f = write(i, text_content, len);

	if (i == -1 || f == -1)
		return (-1);
	close(0);
	return (1);
}
