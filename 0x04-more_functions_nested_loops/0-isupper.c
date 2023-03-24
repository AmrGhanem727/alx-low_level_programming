#include "main.h"
/**
 * _isupper - checks for anuppercase character
 * @c: character to be checked
 * Return: 1 if upper case
 * 0 if lower case
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else if (c >= 97 && c <= 122)
	{
		return (0);
	}
