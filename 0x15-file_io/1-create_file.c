#include "main.h"

/**
 * create_file create a file.
 * @filename is the name of the file
 * @text_content is a null terminated string to write to the file.'
 * returns 1 on success and -1 on failure.
 * if the file already exists, it is truncated.
 * if the filename is null, it returns -1.
 * if text_content is null, creates an empty file.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, t, s = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[s])
			s++;
		t = write(fd, text_content, s);
		if (t !=s)
			return (-1);
	}
	close(fd);
	return (1);
}	
