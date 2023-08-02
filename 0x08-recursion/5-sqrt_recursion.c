#include "main.h"
/**
 * _sqrt_recursion - returns natural square of number
 * @n: number
 * Return: always 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recurses to find natural square
 * @n: number
 * @i: iterator
 * Return: always 0
 */
int actual_sqrt_recursion(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (actual_sqrt_recursion(n, i + 1));
}
