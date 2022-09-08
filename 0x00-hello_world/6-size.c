#include <stdio.h>

/**
 * main - Entry piont
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;

	printf("size of a char: %ld byte(s)\n", sizeof(d));
	printf("size of a int: %ld byte(s)\n", sizeof(a));
	printf("size of a long int: %ld byte(s)\n", sizeof(b));
	printf("size of a long long int: %ld byte(s)\n", sizeof(c));
	printf("size of a float: %ld byte(s)\n", sizeof(f));
	return (0);
}

