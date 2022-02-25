#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * main - short description
 * @argc: argument count
 * @argv: argument array
 * Return: 0 success 1 if failure
 */
int main(int argc, char *argv[])
{
	int result, sum1, sum2;
/* printing error if insufficient number of arguments given*/
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}/* initializing variables + converting string to integer using atoi*/
	sum1 = atoi(argv[1]);
	sum2 = atoi(argv[2]);
	result = sum1 * sum2;
	printf("%d\n", result);

	return (0);
}
