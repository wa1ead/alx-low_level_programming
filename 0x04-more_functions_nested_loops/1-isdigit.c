#include "main.h"
/**
 * _isdigit - check if number between 0 - 9
 * @c: char to check
 * Return: always 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
