#include "main.h"

/**
 * flip_bits - flips bits of a given number
 * @n: input number to be flipped
 * @m: number to flip n to
 * Return: number of bits need to flip to get number
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
