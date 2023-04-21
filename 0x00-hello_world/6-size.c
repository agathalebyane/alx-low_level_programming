#include <stdio.h>
/**
 * main - A program that prints the size of various types on the computer
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;
	printf("Size of a chair: %d byte(s)\n",(unsigned long)sizeof(char));
	printf("Size of an int: %d byte(s)\n",(unsigned long)sizeof(int));
	printf("Size of a long int: %d byte(s)\n", (unsigned long)sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", (unsigned long)sizeof(long long int));
	printf("Size of a float: %i byte(s)\n", (unsigned long)sizeof(float));
	return (0);
}
