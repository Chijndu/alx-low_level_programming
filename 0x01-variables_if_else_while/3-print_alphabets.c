#include <stdio.h>

/**
 * main - prints alpha in lower case and upper
 * Return: Always 0
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	for (ch = 'A'; ch <= 'Z'; ch++)
		putvhar(ch);

	putchar('\n');

	return (0);
}
