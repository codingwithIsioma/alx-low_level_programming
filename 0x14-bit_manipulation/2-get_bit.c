#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given value
 * @index: The index starting from 0 of the bit you want
 * @n: The bit
 *
 * Return: The value of bit at index or -1 if error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}
