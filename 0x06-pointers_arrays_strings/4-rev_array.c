#include "main.h"
/**
 * reverse_array - function tha reverses an array
 * @a: an array of integers
 * @n: number of elements of an array
 */
void reverse_array(int *a, int n)
{
	int i;
	int tempo;

	i = 0;
	n = n - 1;

	while (i < n)
	{
		tempo = a[i];
		a[i] = a[n];
		a[n] = tempo;
		i++;
		n--;
	}
}
