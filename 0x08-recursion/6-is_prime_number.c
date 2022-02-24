#include "main.h"
/**
 * - test_forprime - checks for primenumber
 *@n: the given number to check
 *@test: number to test against
 * Return: 0 success
 */
int test_forprime(int n, int test)
{
	if (n == test)
		return (1);

	if (n % test == 0)
		return (0);
	return (test_forprime(n, test + 1));
}
/**
 * is_prime_number - checks for input integer
 * @n: number
 * Return: 0 success
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (test_forprime(n, 2));
}
