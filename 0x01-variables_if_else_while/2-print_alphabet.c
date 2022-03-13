#include <stdio.h>
/**
 * main - Description prints alphabelt
 * Return: 0
 */
int main(void)
{
	for (int x = 'A'; x <= 'Z'; x++)
	{
		int tolow = x + 32;

		putchar(tolow);
	}
	putchar('\n');
	return (0);
}
