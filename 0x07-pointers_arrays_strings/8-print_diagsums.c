#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 * @a: pointer to start of matrix
 * @size: width of matrix column
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, m, p, y = 0, z = 0;

	for (i = 0; i < size; i++)
	{
		p = (i * size) + i;
		y += *(a + p);
	}
	for (m = 0; m < size; m++)
	{
		p = (m * size) + (size - 1 - j);
		z += *(a + p);
	}
	printf("%i, %i\n", y, z);
}
