#include "main.h"
#include <stdio.h>
/**
 * main - prints arguments that are received
 *@argc: argument count
 *@argv: argument array
 *Return: 0 success
 */
int main(int argc, char *argv[])
{
	int rng = 0;

	while (rng < argc)
	{
		printf("%s\n", argv[rng]);
		rng++;
	}
	return (0);
}
