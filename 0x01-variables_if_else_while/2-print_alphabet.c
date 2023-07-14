#include <stdio.h>
/**
* main - entry point
* putchar - function
* Return: always 0
*/
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}

	putchar('\n');

	return (0);
}
