#include "main.h"
/**
 * print_last_digit - prints the last digit
 *@n: number
 *Return: 0
 */
int print_last_digit(int n)
{
	int s;

	s = (n % 10);

	if (s < 0)
	{
		s = (-1 * s);
	}
	_putchar(s + '0');
	return (s);
}
