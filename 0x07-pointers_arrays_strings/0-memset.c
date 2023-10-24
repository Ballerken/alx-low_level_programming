#include "main.h"
/**
 * _memset - fills mem with a byte.
 * @n: number of bytes to be filled
 * @b: constant byte to fill with
 * @s: address to be filled
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		s[m] = b;
	}
	return (s);
}
