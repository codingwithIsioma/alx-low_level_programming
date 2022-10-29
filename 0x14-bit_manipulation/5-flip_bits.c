#include "main.h"

/**
 * flip_bits - Returns the num of bits you would need to
 * flip to get from one number to another
 *
 * @n: The bit
 * @m: The number to flip n to
 *
 * Return: The necessary num of bits to flip to get from n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, bits = 0;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}
