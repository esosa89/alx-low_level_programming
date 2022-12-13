#include "main.h"
/**
 * _isalpha - is alphabet
 * @c: single character
 * Return: 0
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
