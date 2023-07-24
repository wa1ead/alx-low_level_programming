#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generates random valid password
 * Return: always 0
 */
int main(void)
{
	int pswd[100];
	int a, b ,sum;

	sum = 0;

	srand(time(NULL));

	for (a = 0; a < 100; a++)
	{
		pswd[a] = rand() % 78;
		sum += (pswd[a] + '0');
		putchar(pswd[a] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			b = 2772 - sum - '0';
			sum += b;
			putchar(b + '0');
			break;
		}
	}

	return (0);
}
