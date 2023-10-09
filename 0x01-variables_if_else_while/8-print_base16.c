#include <stdio.h>
/**
 * main - main function
 *
 * Return: 0
 */
int main(void)
{
	char a;
	char b;

	for (a = '0'; a <= '9'; a++)
		putchar(a);
	{
		for (b = 'a'; b < 'g'; b++)
			putchar(b);
	}
	putchar('\n');
	return (0);
}
