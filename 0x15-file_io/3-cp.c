#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - gives 1024 bytes for buf
 * @file: name of file storing buf
 * Return: a ptr to nebyte
 */
char *create_buffer(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buf);
}

/**
 * close_file - Closes file exp
 * @fd: The file desc clo
 */
void close_file(int fd)
{
	int f;

	f = close(fd);
	if (f == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - recreates the content
 * @argc: amou of argu given to prog
 * @argv: ar of ptr to the argu
 * Return: 0 on s
 * Description: If the argu count is wromg - exit code 97
 */
int main(int argc, char *argv[])
{
	int fm, b, t, y;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buf = create_buffer(argv[2]);
	fm = open(argv[1], O_RDONLY);
	t = read(fm, buf, 1024);
	b = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (fm == -1 || t == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}
		y = write(b, buf, t);
		if (b == -1 || y == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}
		t = read(fm, buf, 1024);
		b = open(argv[2], O_WRONLY | O_APPEND);
	} while (t > 0);
	free(buf);
	close_file(fm);
	close_file(b);
	return (0);
}
