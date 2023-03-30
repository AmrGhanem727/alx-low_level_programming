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
	
	i = 0;
	for (; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	i = i;
	while (i < n)
	{
		dest[i] = '\0';
	}
	return (dest);
}
