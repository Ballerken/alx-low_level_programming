#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: first param
 * @b: second param
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int k;

	k = *a;
	*a = *b;
	*b = k;
}
