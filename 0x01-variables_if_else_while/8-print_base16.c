#include <stdio.h>
/**
 * main - print all the numbers of base 16
 * Return: Always 0
 */
int main(void)
{
	int n;
	int ch;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
