#include <stdio.h>

/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: The string to be printed
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
	printf("\n"); /* Print a new line when the end of the string is reached */
		return;
	}

	printf("%c", *s); /* Print the current character */
	_puts_recursion(s + 1); /* Call function recursively with next character */
}

return: (0);
