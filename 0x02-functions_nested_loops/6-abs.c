#include "main.h"
/**
 * _abs - Prints the absolute value of the integer
 * @c: The integer to be checked
 * Return: absolute value of the number or zero
 */
int _abs(int c)
{
	if (c < 0)
	{
		int absval;

		absval = c * -1;
		return (absval);
	}
	else
	{
		return (c);
	}
}
