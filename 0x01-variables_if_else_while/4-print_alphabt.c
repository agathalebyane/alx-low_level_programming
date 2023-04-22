#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * folllowed  by a new line, except for q and e
 * Return: always 0 (success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
