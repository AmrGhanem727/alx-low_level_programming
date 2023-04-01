#include "main.h"
/**
 * rot13 - encodes a string using rot13
 * @str: the string to encode
 *
 * Return: encode string
 */
char *rot13(char *str)
{
	int i, j;

	char alphas[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char change[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (alphas[j] != '\0')
		{
			if (str[i] == alphas[j])
			{
				str[i] = change[j];
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}
