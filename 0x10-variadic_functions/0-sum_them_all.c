#include "main.h"
/**
 * sum_them_all - sum of integers
 * @n: numbers
 * Return: always 0
 */
int sum_them_all(const unsigned int n, ...)
{
	if (n > 0 || n < 0)
		return (n + n);
	else if (n == 0)
		return (0);
}
