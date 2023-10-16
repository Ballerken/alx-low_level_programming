#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: pointer to a char
 * Return: 0
 */
int _strlen(char *s)
{
	int y;

	for (y = 0; *s != '\0'; y++)
	{
		s++;
	}
	return (y);
}
