#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

/**
 * main- a program that copies the content of a file to another file.
 * @argc: a pointer
 * @argv: pointer
 *
 *Return: EXIT_SUCCESS
 */

int main(int argc, char *argv[])
{
	const char *file_a;
	const char *file_b;
	int fd_a;
	int fd_b;
	ssize_t br;
	char buffer[BUFFER_SIZE];
	int close_a;
	int close_b;

	if (argc != 3)
	{
		fprintf(stderr, "Usage: %s <from> <to>\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	file_a = argv[1];
	file_b = argv[2];

	fd_a = open(file_a, O_RDONLY);
	if (fd_a == -1)
	{
		perror("open");
		exit(EXIT_FAILURE);
	}
	fd_b = open(file_b, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_b == -1)
	{
		perror("open");
		exit(EXIT_FAILURE);
	}

	while ((br = read(fd_a, buffer, BUFFER_SIZE)) > 0)
	{
		if (write(fd_b, buffer, br) != br)
		{
			perror("write");
			exit(EXIT_FAILURE);
		}
	}
	if (br == -1)
	{
		perror("read");
		exit(EXIT_FAILURE);
	}
	close_a = close(fd_a);
	if (close_a == -1)
	{
		perror("close");
		exit(EXIT_FAILURE);
	}
	close_b = close(fd_b);
	if (close_b == -1)
	{
		perror("close");
		exit(EXIT_FAILURE);
	}
	return (EXIT_SUCCESS);
}
