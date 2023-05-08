#include "main.h"

/**
 * create_file - this func will cr a fi
 * @filename: a ptr name of the file cr
 * @text_content: a ptr for str to wri file
 * Return: If the function fails - -1
 */
int create_file(const char *filename, char *text_content)
{
	int tj, y, l = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}
	tj = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	y = write(tj, text_content, l);
	if (tj == -1 || y == -1)
		return (-1);
	close(tj);
	return (1);
}
