#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: memory stored
 * @src: memory copied
 * @n: number
 * Return: always 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int y = n;

	for (; x < y; n++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
