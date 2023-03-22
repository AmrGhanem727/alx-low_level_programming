#inlcude "main.h"
/**
 * print_alphabet - Make the alpahbet
 * Return : void
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	putchar('\n');
	return (0);
}
