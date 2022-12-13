#include "main.h"
/**
 *print_alphabet_x10 - print complete alphabets 10 times
 */

void print_alphabet_x10(void)
{
	int num;

	for (num = 1; num <= 10; num++)
	{
		char alpha2;

		for (alpha2 = a; alpha2 <= z; alpha2++)
		{
			_putchar(alpha2);
		}
		_putchar('\n');
	}
}
