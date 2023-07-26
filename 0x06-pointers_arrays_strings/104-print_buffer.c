#include "main.h"
#include <stdio.h>
/**
 * print_buffer - prints buffer
 * @b: buffer
 * @size: size
 * Return: always 0
 */
void print_buffer(char *b, int size)
{
	int x, y, z;

	z = 0;
	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (z < size)
	{
		y = size - z < 10 ? size - z : 10;
		printf("%08x: ", z);
		for (x = 0; x < 10; x++)
		{
			if (x < y)
			{
				printf("%02x", *(b + z + x));
			}
			else
			{
				printf("  ");
			}
			if (x % 2)
			{
				printf(" ");
			}
		}
		for (x = 0; x < y; x++)
		{
			int c = *(b + z + x);

			if (c < 32 || c > 132)
			{
				c = '.';
			}
			printf("%c", c);
		}
		printf("\n");
		z += 10;
	}
}
