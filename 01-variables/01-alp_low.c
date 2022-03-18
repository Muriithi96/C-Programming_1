#include <stdio.h>
/**
 * main - main branch
 * Description: prints alphabets in lowercase and in reverse
 * and except j and t.
 * Return: 0
 */

int main(void)
{
	char n = 122;

	while (n >= 97)
	{
		if (n != 116 && n != 106)
		{
			putchar(n);
		}
		n--;
	}

	putchar('\n');
	return (0);
}

