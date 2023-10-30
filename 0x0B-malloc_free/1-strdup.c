#include "main.h"

/**
 * _strdup - duplicates a string
 * @str: string to duplicate
 *
 * Return: pointer to the duplicate string,
 * or NULL if str is NULL or malloc fails
 */
char *_strdup(char *str)
{

	char *k;
	int i, r = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	k = malloc(sizeof(char) * (i + 1));

	if (k == NULL)
	{
		return (NULL);
	}
	for (r = 0; str[r]; r++)
	{
		k[r] = str[r];
	}
	return (k);

}
