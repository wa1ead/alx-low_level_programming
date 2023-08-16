#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
/**
 * op_add - Returns summation
 * @a: number
 * @b: number
 * Return: always 0
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Returns substraction
 * @a: number
 * @b: number
 * Return: always 0
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns multiplication
 * @a: number
 * @b: number
 * Return: always 0
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - retuns division
 * @a: number
 * @b: number
 * Return: always 0
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returnd modulo
 * @a: number
 * @b: number
 * Return: always 0
 */
int op_mod(int a, int b)
{
	return (a % b);
}
