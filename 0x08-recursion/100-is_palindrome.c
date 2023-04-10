#include "main.h"
/**
*longit - function that returns the power of number
*@s: string
*
*Return: length of a string
*/
int longit(char *s)
{
	int l = 0;

	if (*s != '\0')
	{
		l++;
		return (longit(s + 1) + l);
	}
	return (l);
}
/**
 *comparer - function that returns the power of number
 *@i: original number
 *@l: counter to compare multiplication
 *@s: string
 *Return: square root
 */
int comparer(int i, int l, char *s)
{
	if (i >= l)
		return (1);
	else if (s[i] == s[l])
		return (comparer(i + 1, l - 1, s));
	else
		return (0);
}
/**
 *is_palindrome - return 1 if is number prime
 *@s: number to evaluate
 *Return: 1 or 0
 */
int is_palindrome(char *s)
{
	int l = longit(s);
	int i = 0;

	return (comparer(i, l - 1, s));
}
