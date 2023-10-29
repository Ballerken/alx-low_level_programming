#include "main.h"
#include <libgen.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 *
 * Return: 0 on success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	char *prog_name = argv[0];

	printf("%s\n", prog_name);
	return (0);
}
