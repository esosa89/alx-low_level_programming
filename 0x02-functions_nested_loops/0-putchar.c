#include "main.h"
/**
 * main - program that prints _putchar
 *
 * Return: 0
 */
int main(void)
{
	char *pro = "_putchar";

	while (*pro)
	{
		_putchar(*pro);
		pro++;
	}
	_putchar('\n');
	return (0);
}
