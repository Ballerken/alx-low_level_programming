#include "main.h"

/**
 * flip_bits - Calculates the number of bits that need to be flipped
 * in order to transition from one number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The count of bits that need to be flipped.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int dif = n ^ m;
	unsigned int counter = 0;

	while (dif != 0)
	{
		counter += dif & 1;
		dif >>= 1;
	}

	return (counter);
}
