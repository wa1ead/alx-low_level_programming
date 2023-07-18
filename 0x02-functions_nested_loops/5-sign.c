#include "main.h"
/**
* print_sign - checks the number sign
* @n: the number input
* if - statement
* Return: 1 is +, 0 is 0, -1 is -
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	putchar('\n')
}
