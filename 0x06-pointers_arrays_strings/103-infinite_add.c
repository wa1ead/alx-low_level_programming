#include "main.h"
/**
 * rev_string - reverse array
 * @n: number
 * Return: always 0
 */
void rev_string(char *n)
{
	int x;
	int y;
	char temp;

	while (*(n + x) != '\0')
	{
		x++;
	}
	x--;
	for (y = 0; y < x; y++; x--)
	{
		temp = *(n + y);
		*(n + y) = *(n + x);
		*(n + x) = temp;
	}
}

/**
 * infinite_add - add 2 numbers
 * @n1: number 1
 * @n2: number 2
 * @r: buffer
 * Return: always 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, x = 0, y = 0, digits = 0;
	int val1 = 0, val2 = 0, temp_tot = 0;

	while (*(n1 + x) != '\0')
	{
		x++;
	}
	while (*(n2 + y) != '\0')
	{
		y++;
	}
	x--;
	y--;
	if (x >= size_r || y >= size_r)
	{
		return (0);
	}
	while (y >= 0 || x >= 0 || overflow == 1)
	{
		if (x < 0)
		{
			val1 = 0;
		}
		else
		{
			val1 = *(n1 + x) - '0';
		}
		if (y < 0)
		{
			val2 = 0;
		}
		else
		{
			val2 = *(n2 + y) - '0';
		}
		temp_tot = val1 + val2 + overflow;
		if (temp_tot >= 10)
		{
			overflow = 1;
		}
		else
		{
			overflow = 0;
		}
		if (digits >= (size_r - 1))
		{
			return (0);
		}
		*(r + digits) = (temp_tot % 10) + '0';
		digits++;
		x--;
		y--;
	}
	if (digits == size_r)
	{
		return (0);
	}
	*(r + digits) = '\0';
	rev_dtring(r);
	return (r);
}
