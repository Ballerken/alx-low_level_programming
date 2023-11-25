#include "main.h"

/**
 * get_endianness - Checks the endianness of the machine.
 *
 * Return: 0 if the machine is big endian, 1 if it is little endian.
 */

int get_endianness(void)
{
	unsigned int e = 1;
	char *c = (char *)&e;

	return (*c);
}
