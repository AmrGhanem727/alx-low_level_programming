#include <stdio.h>
#include <math.h>
/**
 * main -prints the largest prime factor
 * Return: always 0
 */
int main(void)
{
	long x, maxh;
	long number = 612852475143;
	double square = sqrt(number);

	for (x = 1; x <= square; x++)
	{
		if (number % x == 0)
		{
			maxh = number / x;
		}
	}
	printf("%ld\n", maxh);
	return (0);
}
