#include "main.h"
/**
 *_abs - prints absolute value of an integer
 *
 *@p: integer
 *
 * Return: value of integer
 */
int _abs(int p)
{
	if (p < 0)
		p = p * -1;
	return (p);
}
