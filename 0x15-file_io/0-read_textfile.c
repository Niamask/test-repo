#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the list
 * @letters: the number
 *
 * Return: 1 or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer = NULL;
	ssize_t b_read;
	ssize_t b_written;
	int f;

	if (!(filename && letters))
		return (0);

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
		return (0);

	b_read = read(f, buffer, letters);
	close(f);

	if (b_read < 0)
	{
		free(buffer);
		return (0);
	}
	if (!b_read)
		b_read = letters;

	b_written = write(STDOUT_FILENO, buffer, b_read);
	free(buffer);

	if (b_written < 0)
		return (0);

	return (b_written);
}
