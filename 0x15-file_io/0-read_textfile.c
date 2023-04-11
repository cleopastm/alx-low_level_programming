#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>

/**
 * read_textfile- a function that reads a text file
 * and prints it to the POSIX standard output.
 * @letters: a pointes to a string
 * @filename: a pointer to the file name
 *
 * Return: 0 if file can;t be opened
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *b;
	ssize_t a;
	ssize_t c;
	ssize_t d;

	d = open(filename, O_RDONLY);
	if (d == -1)
	{
		return (0);
	}
	b = malloc(sizeof(char) * letters);
	c = read(d, b, letters);
	a = write(STDOUT_FILENO, b, c);

	free(b);
	close(d);

	return (a);
}
