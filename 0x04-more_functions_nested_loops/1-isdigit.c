#include "main.h"
/**
 * _isdigit - checks for the digit
 * @x: the number to be checked
 * Return: 1 if it's a digit or 0 for otherwise
 */
int _isdigit(int x)
{
	if (x >= 48 && x <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
