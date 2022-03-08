#include "main.h"
/**
 * rot13- encodes a string using rot13
 * @s: pointer to string
 * Return: s (success)
 */

char *rot13(char *s)
{
	int i = 0;
	int a = 0;
	char *pre = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *post = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i] != '\0')
	{
		for (a = 0; a < 52; a++)
		{
			if (s[i] == pre[a])
			{
				s[i] = post[a];
				break;
			}

		}
		i++;
	}
	return (s);
}
