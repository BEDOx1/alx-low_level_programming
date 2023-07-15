#include <stdio.h>

/**
 * main - Enrty point
 *
 * Description: print alphabet in lowercase then in uppercase
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	while (C <= 'Z')
	{
		putchar(c);
		C++;
	}
	putchar("\n");
	return (0);
}
