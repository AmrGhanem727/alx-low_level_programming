#include <stdio.h>
/**
 * _strlen - a function that prints the length of a certain string
 * @s: the sting hwhose lenght will be printed
 * Return: the lnegth of the string
 */
int _strlen(char *s)
{
	size_t length = 0;

	while (*s++)
	{
		length++;
	}
	return (length);
}
