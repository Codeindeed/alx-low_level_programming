#include "main.h"
/**
 * printsign - prints signs of numbers inputed
 * @n: character
 * Return: 0
 */
int printsign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return  (-1);
	}
}
