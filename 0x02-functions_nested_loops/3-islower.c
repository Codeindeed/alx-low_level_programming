#include "main.h"
/**
 * _islower - checks for upper and lowercase letters
 * _putchar - writes the answers
 * @c: charcharacter
 * Return: 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}