#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - Addition
 * @a: int
 * @b: int
 * Return: Sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtraction
 * @a: int
 * @b: int
 * Return: Difference
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplication/Product
 * @a: int
 * @b: int
 * Return: Product
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Division
 * @a: integer
 * @b: integer
 * Return: Quotient
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Modulus: Remainders
 * @a: int
 * @b: int
 * Return: Remainder
 */

int op_mod(int a, int b)
{
	return (a % b);
}
