#include "main.h"
#include <stdio.h>

/**
 * reverse_array - function that reverse content of array
 * @a: An array of integers
 * @n: Number of elements to swap
 *
 * Return: empty
 */
void reverse_array(int *a, int n)
{
	int tmp, index;
	for (index = n - 1; index > n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
