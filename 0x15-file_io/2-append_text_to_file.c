#include <stdio.h>
#include "main.h"
#include <stdlib.h>


/**
 * append_text_to_file- a function that appends text at the end of a file.
 * @filename: name of the file
 * @text_content: terminated string
 *
 * Return: 1 on success -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int r;
	FILE *file = fopen(filename, "a");

	if (file == NULL)
	{
		return (-1);
	}
	r = fputs(text_content, file);
	fclose(file);

	if (r == EOF)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}
