#include "main.h"
/**
 * print_last_digit - prints the last digit of the number
 * @n: the number that will be tested
 * Return: it returns the value of the last number
 */
int print_last_digit(int n)
{
	int digit;

	digit = n % 10;
	if (digit < 0)
	{
		digit = digit * -1;
	}
	_putchar(digit + '0');
	return (digit);
}
