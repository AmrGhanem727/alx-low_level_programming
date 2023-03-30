#include "main.h"
#include <string.h>

/**
 * _strncat - Function that concatenates two strings
 * @src: 1st string
 * @n: number of bytes
 * @dest: 2nd string
 * Return: it retunrs the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	/**int storage = size_t n;*/
	int i;
	int destlen = strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[destlen + i] = src[i];
	}
	dest[destlen + i] = '\0';
	return (dest);
}
