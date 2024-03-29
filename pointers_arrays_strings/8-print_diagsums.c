#include "main.h"

/**
 * print_diagsums - a function that prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: our array
 * @size: of array
 * Return: sum of the left and write diagonals
 */
void print_diagsums(int *a, int size)
{
	int left_d = 0;
	int right_d = 0;
	int n;

	for (n = 0; n < size; n++)
	{
		left_d += a[(size + 1) * n];
		right_d += a[(size - 1) * (n + 1)];
	}
	printf("%d, %d\n", left_d, right_d);


}
