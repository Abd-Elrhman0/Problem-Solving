#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix of integers.
 *
 * @a: the matrix.
 * @size: the size of the matrix.
 */

void print_diagsums(int *a, int size)
{
	int j, f, i, k, t;

	for (j = 0; j < size; j++)
		f = f + a[j * size + j];

	for (i = 0, k = size - 1; i < size, k >= 0 ; i++, k--)
		t = t + a[i * size + k];
	
	printf("%d, %d\n", f, t);
}
