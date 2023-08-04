#include "main.h"
/**
 * _memset - fill memory with value
 * @s: adress of memory
 * @b: value
 * @n: number
 * Return: always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	int x = 0;

	for (; n > 0; x++)
	{
		s[x] = b;
		n--;

	}
	return (s);
}
