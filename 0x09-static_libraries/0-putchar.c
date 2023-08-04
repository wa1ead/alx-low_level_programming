#include <unistd.h>
/**
 * _putchar - writes character c
 * @c: character
 * Return: always 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
