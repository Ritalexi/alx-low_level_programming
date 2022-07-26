#include "main.h"

/**
 * append_text_to_file - Entry point
 * @filename: name of the file
 * @text_content: NULL terminated string to
 * add at the end of the file
 * Return: Always 0
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i, j, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	i = open(filename, 0_WRONLY | O_APPEND);
	j = write(o, text_content, len);

	if (i == -1 || j == -1)
		return (-1);

	close(i);

	return (1);
}
