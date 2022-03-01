#include <stdio.h>
/**
 * find_sqrt - tests if the y * y is equal to n
 * @n: an incrementing natural number
 * @sqrt: square root
 * Return: num + 1 as an integer
 */
int find_sqrt(unsigned int n, int sqrt)
{
	unsigned int i = sqrt * sqrt;

	if (n == i)
		return (sqrt);
	if (n < i)
		return (-1);
	else
		return (find_sqrt(n, 1 + sqrt));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to be investigated
 * Return: natural square root of n
 */

int _sqrt_recursion(int n)
{
	if (n == 1)
		return (1);
	if (n <= 0)
		return (-1);

	return (find_sqrt(n, 2));

}
