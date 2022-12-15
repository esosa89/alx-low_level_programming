#include "main.h"
#include <stdio.h>

/**
 * main - is upper.
 *
 * Return: Always 0.
 */
int main(void)
{
	char c;

	if (isupper(c) == 0)
	{
	printf("%c: 0\n", c);
	}
	else
	{
	printf("%c: 1\n", c);
	}
	return (0);
}
