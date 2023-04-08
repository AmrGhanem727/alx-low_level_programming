#include "main.h"
/**
 * _strlen_recursion - function tha returns the lenght of a string
 * @s: string
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	int i = 1;

	if (*s != '\0')
	{
		return (i + _strlen_recursion(s + 1));
	}
	return (0);
}
