#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of integers
 * Return: always 0
 */
void reverse_array(int *a, int n)
{
	int x;
	int y;

	for (x = 0; x < n--; x++)
	{
		y = a[x];
		a[x] = a[n];
		a[x] = y;
	}
}
