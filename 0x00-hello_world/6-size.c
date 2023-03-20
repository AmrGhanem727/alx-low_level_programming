#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 */
int main(void)
{
	char a;
	int h;
	long int j;
	long long int f;
	float s;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(h));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(j));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(f));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(s));
	return (0);
}
