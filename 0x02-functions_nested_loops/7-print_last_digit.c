#include "stdio.h"
/**
 * print_last_digit - this will print the last digit of a number
 * @n:character
 * Return: 0
 */
int print_last_digit(int n)
{
	int y, e;

	if (y < 0)
	{
		y = -y;
	}
	e = '0' + y;
	_putchar(e);
	return (y);
}
