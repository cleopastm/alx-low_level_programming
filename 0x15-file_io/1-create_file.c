#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * create_file-a function that creates a file.
 * @filename: name of yhe file
 * @text_content: terminated string
 *
 * Return: i success -1 failure
 */

int create_file(const char *filename, char *text_content)
{
	int f;
	ssize_t l;
	ssize_t n;

	if (filename == NULL)
	{
		return (-1);
	}
	f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IWUSR);
	if (f == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		l = strlen(text_content);
		n = write(f, text_content, l);
		if (n == -1 || n != l)
		{
			close(f);
			return (-1);
		}
	}
	close(f);
	return (1);
}
