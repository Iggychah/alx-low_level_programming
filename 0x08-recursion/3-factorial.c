#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: num
 *
 * Return: the factorial of the number
 */
int factorial(int n)
{
	int inset_num;

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	inset_num = factorial(n - 1);
	return (n * inset_num);
}
