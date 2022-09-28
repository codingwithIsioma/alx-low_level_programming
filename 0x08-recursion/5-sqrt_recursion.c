#include "main.h"

/**
 * helper - Finds the natural square root of an inputted num
 * @num: The inputted number
 * @root: The root to be found
 *
 * Return: If the number has a natural square root - the square root
 *         Otherwise, -1
 */
int helper(int num, int root)
{
	if ((root * root) == num)
		return (root);
	if (root == num / 2)
		return (-1);

	return (helper(num, root + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: The number to return
 *
 * Return: If @n has a natural square root - the square root of n
 *         Otherwise, -1
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (helper(n, root));
}
