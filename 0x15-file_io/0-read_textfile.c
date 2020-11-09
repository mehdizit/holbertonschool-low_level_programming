#include "holberton.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int r = 0;
	int w = 0;
	char *buf;
	if (filename == NULL)
		return (0);
	
	fd = open(filename, O_RDONLY);	
		
	
	if (fd == -1)
	{
		free(buf);
		return (0);
	}
	buf = malloc(sizeof(char) * letters);
		if (buf == NULL)
		{
			close(fd);
			return (0);
		}
		r = read(fd, buf, letters);
		if (r == -1)
		{
			free(buf);
		return (0);
		}
		buf[i] = '\0';
		w = write(STDOUT_FILENO, buf, r);
		if (w == -1)
	{
		free(buf);
		return (0);
	}
			
	close(fd);
	return (r);
}
	
