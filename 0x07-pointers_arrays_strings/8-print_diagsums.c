#include "main.h"
#include <stdio.h>
/**
 *print_diagsums - prints sum of two diagonals of a square.
 *@a: pointer to array.
 *@size: size of array.
 *
 *Return: void.
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;
	


	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			sum1 += *(a + 1);
		if (i % (size - 1) == 0 && i != 0 && i < size * size - 1)
			sum2 += *(a + i);
	}
	printf("%d, %d\n", sum1, sum2);
}
