#include "main.h"
#include <string.h>

/**
 * _strncpy - a function that copies a string into another string
 * @dest: 1st string
 * @src: 2nd string
 * @n: number of bytes
 * Return: it returns the copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
