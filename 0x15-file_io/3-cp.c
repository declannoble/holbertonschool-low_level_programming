#include "main.h"
/**
 *main - copies content of one file into another
 *@argc: count of args
 *@argv: pointer to args
 *Return: error 97, 98, 99 if error occurs.
 */

int main(int argc, char *argv[])
{
	int pre, post, bytread, bytwrite;
	char buff[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	pre = open(argv[1], O_RDONLY);
	if (pre == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	post = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (post == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	bytread = 1024;
	while (bytread == 1024)
	{
		bytread = read(pre, buff, 1024);

		if (bytread == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			close(pre);
			exit(98);
		}

		bytwrite = write(post, buff, bytread);
		if (bytwrite == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(post);
			exit(99);
		}
	}

	if (close(pre) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", pre);
		exit(100);
	}
	else
		close(pre);

	if (close(post) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", post);
		exit(100);
	}
	else
		close(post);

	return (0);
}
