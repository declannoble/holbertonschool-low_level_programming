/**
 * _strlen - returns length of string
 *
 * @s: pointer
 *
 * return : i (string count)
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
