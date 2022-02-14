/**
 * swap_int - swaps value of integers
 *
 *
 *@a: value being swapped
 *
 *@b: value being swapped
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	int d = *b;

	*a = d;
	*b = c;
}
