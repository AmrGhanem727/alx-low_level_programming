#include "main.h"
/**
 * _isupper - check if a letter is uppercase
 * @x: the number to be checked
 * Return: 1 for uppercase or 0 for otherwise
 */
int _isupper(int x)
{
	if (x >= 65 && x <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
