#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - add all the numbers give as parameters
 * @n: numbers of arguments to add
 * Return: sum of numbers, if n is 0, return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	unsigned int sum = 0;

	va_start(ap, n);

	if (n == 0)
		return (0);

	while(i < n)
	{
		sum += va_arg(ap, int);
		i++;
	}

	va_end(ap);

	return (sum);
}
