#include "main.h"
/**
 * _strlen - returns length of string
 *
 * @s: pointer
 *
 * Return: i (string count)
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
/**
 * create_file - function that creates a file
 *@filename: name of file to create
 *@text_content: NULL terminated string
 *Return: 1 if a success and -1 if otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int bytwrite;
	int len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	len = _strlen(text_content);
	bytwrite = write(fd, text_content, len);

	if (bytwrite == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
