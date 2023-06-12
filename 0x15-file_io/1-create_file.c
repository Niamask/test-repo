#include "main.h"

/**
 * _strlen - compute the length of a NULL-terminated string.
 * @str: the string to measure
 *
 * Return: the length of str, or -1 if str is NULL
 */
ssize_t _strlen(const char *str)
{
	ssize_t len = 0;

	if (!str)
		return (-1);

	while (*str++)
		++len;

	return (len);
}

/**
 * create_file - function that creates a file.
 * @filename: the list
 * @text_content: the number
 *
 * Return: 1 or 0
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t b_written = 0;
	int f;

	if (!filename)
		return (-1);

	f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (f < 0)
		return (-1);

	if (text_content)
		b_written = write(f, text_content, _strlen(text_content));

	close(f);

	if (b_written < 0)
		return (-1);
	return (1);
}
