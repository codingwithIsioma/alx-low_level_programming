#include "main.h"

/**
 * _pow_recursion - Returns the value of @x raised
 *                  to power @y.
 * @x: The number
 * @y: The exponent
 * Return: -1 if @y is lower than 0
 *         or 1 if @y is equal to 0
 *         or the value of @x raised to @y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	/*
	 * sets the value of @x to x times the pow
	 * of y - 1, which mulitplies x by itself y
	 * times by reducing y till it gets to 0, which
	 * returns 1. Then stacks till the bottom and returns
	 * the final value of x.
	 */
	return (x *= (_pow_recursion(x, y - 1)));
}
