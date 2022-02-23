#include <stdio.h>
int find_sqrt(unsigned int n, int sqrt)
{
	unsigned int i = sqrt * sqrt;
	if (n == i)
		return(sqrt);
	if (n < i)
		return(-1);
	else
		return(find_sqrt(n , 1+ sqrt));
}

int _sqrt_recursion(int n)
{
	if (n == 1)
		return(1);
	if (n <= 0)
		return(-1);

	return(find_sqrt(n , 2));

}
int main(void)
{
	int r;
       r = _sqrt_recursion(1);
	  printf("%d\n", r);
    r = _sqrt_recursion(1024);
    printf("%d\n", r);
    r = _sqrt_recursion(16);
    printf("%d\n", r);
    r = _sqrt_recursion(17);
       printf("%d\n", r);
    r = _sqrt_recursion(25);
    printf("%d\n", r);
    r = _sqrt_recursion(-1);
       printf("%d\n", r);
    return (0);
}
