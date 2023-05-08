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
	char *jae;
	ssize_t tj;
	ssize_t y;
	ssize_t b;
	tj = open(filename, O_RDONLY);
	if (tj == -1)
		return (0);
	jae = malloc(sizeof(char) * letters);
	b = read(tj, jae, letters);
	y = write(STDOUT_FILENO, jae, b);
	free(jae);
	close(ty);
	return (y);
}
