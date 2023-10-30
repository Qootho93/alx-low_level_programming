#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints it to  standard output.
 * @filename: file to read
 * @letters: letters to read
 * Return:  number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fd;
	ssize_t r;
	ssize_t s;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	s = read(fd, buff, letters);
	r = write(STDOUT_FILENO, buff, s);

	free(buff);
	close(fd);
	return (r);
}
