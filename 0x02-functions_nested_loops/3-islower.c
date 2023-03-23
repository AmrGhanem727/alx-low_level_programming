#include "main.h"
/**
 * _islower - CHecks for lowercase characters
 * @c: The checked character
 * Return 1 for lowercase and 0 for otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
