#include "main.h"
#include <string.h>
/**
 * _print_rev_recursion - function tha prints a reversed string
 * @s: stiring
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	int len, i;

	len = strlen(s);
	for (i = len; i >= 0; i--)
	{
		_putchar(*s);
		_print_rev_recursion(s + 1);
	}
}
