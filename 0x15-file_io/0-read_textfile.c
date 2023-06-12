#include "main.h"

#define BUF_SIZE 9096

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the list
 * @letters: the number
 *
 * Return: 1 or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f, ret;
	char buf[BUF_SIZE + 1];
	size_t cpt = 1;

	if (filename == NULL)
		return (0);

	f = open(filename, O_RDONLY);

	if (f == -1)
		return (0);

	while ((ret = read(f, buf, letters)))
	{
		buf[ret] = '\0';
		printf("%s", buf);
		cpt = cpt + ret;
	}

	close(f);
	return (cpt - 1);
}
