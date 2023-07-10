#include "main.h"

/**
 * read_textfile reads a text file and prints it to the stout
 * @letters is the number of letters it should reas & print
 * @filename is the pointer to the file path
 * returns the actual number of letters it could read & print
 * returns 0 if file could not be read
 * returns 0 if file name is null
 * returns 0 if write fails 
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int s, t;
	char *buf;
	
	if (!filename)
		return(0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if(!buf)
		return (0);

	s = read(fd, buf, letters);
	if (s < 0)
	{
		free(buf);
		return (0);
	}
	buf[s] = '\0';

	close (fd);

	t = write(STDOUT_FILENO, buf, s);
	if (t < 0)
	{
		free(buf);
		return (0);
	}

	free(buf);
	return (t);
}
