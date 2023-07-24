#include "main.h"
/**
 * swap_int - swaps the value of integer
 * @a: integer 1
 * @b: integer 2
 * Return: always 0
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
