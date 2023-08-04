#include "main.h"
/**
 * _strncpy -  copies a string
 * @dest: input 1
 * @src: input 2
 * @n: number input
 * Return: always 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int x;

	x = 0;
	while (x < n && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}

	return (dest);
}
