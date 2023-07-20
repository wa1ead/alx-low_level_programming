#include "main.h"
/**
 * print_triangle - prints triangle
 * @size: size of triangle
 * Return: always 0
 */
void print_triangle(int size)
{
	if (size <= 10)
	{
		_putchar('\n');
	}
	else
	{
		int i, j;

		for (i = 0; i <= size; i++)
		{
			for (j = i; j < size; j++)
			{
				_putchar(' ');
			}
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
}
