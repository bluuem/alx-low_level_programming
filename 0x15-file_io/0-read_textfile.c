#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - tis func reads a tf and and prt to sto
 * @filename: the tf that is being red
 * @letters: the num olt ot be red
 * Return: the rt eil be w- actnum bytes read or 0 when f
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bf;
	ssize_t tj;
	ssize_t w;
	ssize_t t;

	tj = open(filename, O_RDONLY);
	if (tj == -1)
		return (0);
	bf = malloc(sizeof(char) * letters);
	t = read(tj, bf, letters);
	w = write(STDOUT_FILENO, bf, t);

	free(bf);
	close(tj);
	return (w);
}
