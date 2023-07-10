#include "main.h"

/**
 * append_text_to_file appends text to the end of a file
 * @filename is the name of the file 
 * @text_content is the null terminated string to add at the end of the file.
 * returns 1 on success and -1 on failure
 * returns -1 if filename is null
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, t, s = 0;

	if (!filename)
		return (-1);
	
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return(-1);

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
