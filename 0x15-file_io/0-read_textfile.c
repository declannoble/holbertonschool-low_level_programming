#include "main.h"

/**
 * read_textfile - reads text file and prints to POSIX standard output
 *@filename: file name
 *@letters: letters
 *Return: Number of letters to read and print or 0 if error occurs.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int bytread;
	int bytwrite;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	bytread = read(fd, buffer, letters);

	if (bytread == -1)
	{
		free(buffer);
		return (0);
	}

	bytwrite = write(STDOUT_FILENO, buffer, bytread);

	if (bytread != bytwrite || bytwrite == -1)
	{
		free (buffer);
		return (0);
	}

	free(buffer);
	close(fd);
	return (bytwrite);
}
