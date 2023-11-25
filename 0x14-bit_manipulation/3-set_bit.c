#include "main.h"

/**
 * set_bit - Sets  value of a bit to 1 at a given index.
 *
 * @n: A pointer to the number to set the bit in.
 * @index: The index of the bit to set (starting from 0).
 *
 * Return: 1 on success, or -1 if an error occurred.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n |= (1UL << index);

	return (1);
}
