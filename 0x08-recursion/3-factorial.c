#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n: the number to compute the factorial of
 *
 * Return: the factorial of n, or -1 if n is negative
 */
int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	result *= factorial(n - 1);

	return (result);
}
