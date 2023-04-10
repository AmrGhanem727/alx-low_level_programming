#include "main.h"
/**
 * root - the main function of the task
 * @a: input
 * @b: input
 * Return: the root of the number
 */
int root(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (root(a, b + 1));
}

/**
 * _sqrt_recursion - Main Entry
 * @n: input
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	return (root(n, 0));
}
