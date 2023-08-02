#include "main.h"
/**
 * is_prime_number - says if integer prime or not
 * @n: number
 * Return: always 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculates if number is prime recursively
 * @n: number
 * @i: iterator
 * Return: always 0
 */
int actual_prime(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (actual_prime(n, i - 1));
}
