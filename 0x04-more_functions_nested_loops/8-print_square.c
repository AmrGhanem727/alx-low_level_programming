#include "main.h"
/**
 * print_square - it is used to print a square
 * @size: the size of the square
 * Return: void
 */
void print_square(int size)
{
	int x, y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
			_putchar(35);

		}
		_putchar('\n');
	}
}
