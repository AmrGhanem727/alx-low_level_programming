#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 *
 * Return: 1
 */
int main(void)
{
	fputs("and that piece of art is useful\"- Dora Korpar. 2015-10-19\n", stderr);

	write(1, quote, 59);
	return (1);
}
