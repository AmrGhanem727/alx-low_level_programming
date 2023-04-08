#include "main.h"
/**
 * _puts - function that prints a stirng
 * @p: a pointer for the string that will be printer
 * Return: void
 */
void _puts(char *str)
{
	for(; *str != 0; str++)
	{
		_putchar(*str);
	}
	_putchar('\n');
}
