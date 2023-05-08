#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: appends text at the end of a file.
 * @text_content: Added content
 *
 * Return: 1 if the file exists, -1 if the fails does not exit
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int rletters;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (rletters = 0; text_content[rletters]; rletters++)
			;

		rwr = write(fd, text_content, rletters);

		if (rwr == -1)
			return (-1);

	}

	close(fd);

	return (1);
}
