#include <stdio.h>
/**
 * _strlen - returns length of string
 *pp* @s: pointer
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
 * swap_int - swaps value of integers
 *
 *
 *@a: value being swapped
 *
 *@b: value being swapped
 */

void swap_char(char *a, char *b)
{
        char c = *a;
        char d = *b;

        *a = d;
        *b = c;
}


void rev_string(char *s)
{
	char *end;
	int len = _strlen(s);
/*	end = s + len - 1; */
	end = &s[len - 1];
	while(s < end)
	{
		swap_char(s , end);
		s++;
		end--;
	}


}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[10] = "My School";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}
