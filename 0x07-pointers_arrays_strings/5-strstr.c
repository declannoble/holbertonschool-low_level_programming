#include "main.h"
/**
 * *_strstr - locates substring
 * @haystack: pointer
 * @needle: pointer
 * Return: 0 success
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int s = 0;

	while (needle[s] != '\0')
	{
		s++;
	}
	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			break
