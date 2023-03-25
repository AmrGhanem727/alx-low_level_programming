#include <stdio.h>
/**
 * main - entry point
 * Return: always 0
 */
int main(void)
{
	int i;
	char hexo;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for (hexo = 'a'; hexo <= 'f'; hexo++)
	{
		putchar(hexo);
	}
	putchar('\n');
	return (0);
}
