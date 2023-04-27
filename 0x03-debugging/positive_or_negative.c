#include "main.h"
/**
 * postive_or_negative - tests function that prints interger is postive
 * @i: number to work on
 * Return: 0
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
