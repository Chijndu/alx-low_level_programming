#include <stdio.h>
#include <stdlib.h>
/**
 * main - a program what prints the # of args passed to it
 * @argc: the # of args
 * Return: 0
 */
int main(int argc, _attribute_((unused))char **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
