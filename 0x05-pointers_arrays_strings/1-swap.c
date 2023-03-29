#include <stdio.h>
/**
 * swap_int - it's a fcuntion that swaps the two integers
 * @a: integer that will be swapped
 * @b: integeer that willbe swapped
 * Return: void
 */
void swap_int (int *a, int *b)
{
	int swapper = *a;
	*a = *b;
	*b = swapper;
}
