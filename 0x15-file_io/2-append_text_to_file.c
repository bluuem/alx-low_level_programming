#include "main.h"

/**
 * append_text_to_file -this funcadds text at the end of a file.
 * @filename: a ptr to the name fi
 * @text_content: the str to put end of the fi
 * Return: If the func f or filename is NULL - -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int b, y, l = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (l = 0; text_content[l];)
			l++;
	}
	b = open(filename, O_WRONLY | O_APPEND);
	y = write(b, text_content, l);
	if (b == -1 || y == -1)
		return (-1);
	close(b);
	return (1);
}
