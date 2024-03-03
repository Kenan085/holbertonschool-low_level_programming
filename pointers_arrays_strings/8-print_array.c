#include "main.h"

/**
 * print_array - Write a function that prints n elements of an
 * array of integers
 * followed by a new line.
 * @a: arr
 * @n: number of elements in arr
 * Return: array
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != (n - 1))
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d", a[i]);
		}
		printf("\n");
}
