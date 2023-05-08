#include "main.h"
#include <string.h>

/**
 * create_file - creates a file
 * @filename: is the name of the file
 * @text_content: string to write to the file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, length, b_w = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		length = strlen(text_content);
		b_w = write(fd, text_content, length);

		if (b_w == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
