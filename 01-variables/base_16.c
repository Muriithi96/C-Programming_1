#include <stdio.h>
/**
 * main - main block
 * Description: prints base 16 numbers
 * and in lowercase.
 * Return: 0
 */

int main(void)
{
	int i, y;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	for (y = 'a'; y <= 'f'; y++)
	{
		putchar(y);
	}
	
	putchar('\n');

	return (0);
}

