#include "main.h"
/**
 * _isupper- checks for upper and lower case letters:
 * @c: is a character
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
