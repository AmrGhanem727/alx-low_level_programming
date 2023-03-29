#include "main.h"
#include <string.h>

/**
 * _strcat - function that concatenates two strings
 * @dest: 1st string
 * @src: 2nd string
 * Return: it returns the concatenated string
 */
char *_strcat(char *dest, char *src)
{
	int i, orglen = strlen(dest);

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[orglen + i] = src[i];
	}
	dest[orglen + i] = '\0';
	return (dest);
}
