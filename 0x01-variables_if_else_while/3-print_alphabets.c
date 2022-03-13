#include <stdio.h>
/**
 * main - print capital and lower letters
 * Return: 0
 */
int main(void)
{
	for (int x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}

	for (int y = 'A'; y <= 'Z'; y++)
	{
		putchar(y);
	}
	putchar('\n');
	return (0);
}

