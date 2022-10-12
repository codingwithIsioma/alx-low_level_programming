#include "3-calc.h"

/**
 * op_add - Addition operator
 * @a: The first integer
 * @b: The second integer
 * Return: The sum of @a and @b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtraction operator
 * @a: First integer
 * @b: Second integer
 * Return: The difference btw @a and @b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplication operator
 * @a: First integer
 * @b: Second integer
 * Return: The product of @a anf @b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divisive operator
 * @a: First integer
 * @b: Second integer
 * Return: The division of @a by @b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - Modolous operator
 * @a: First integer
 * @b: Second integer
 * Return: The remainder of the division btw @a by @b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
