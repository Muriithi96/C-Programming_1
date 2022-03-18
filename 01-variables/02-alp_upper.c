#include <stdio.h>
/**
 * main - main block
 * Description: prints alphabets in uppercase
 * and except k and s
 * Return: 0
 */

int main(void)
{
	char a = 65;

	while (a <= 90)
	{
		if (a != 74 && a != 83)
		{
			putchar(a);
		}
		a++;
	}

	putchar('\n');
	return (0);
}

