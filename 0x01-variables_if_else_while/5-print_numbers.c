#include <stdio.h>
/**
 * main - Prints the numbers since 0 to 9
 *
 * Return: 0
 */
int main(void)
{
	int i;
	for (i = '0'; i <= '9'; i++)
	{
		printf("%i", i);
	}
	putchar('\n');
	return (0);
}
